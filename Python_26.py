def remove_duplicates(numbers):
unique_elements = set()
result = []
for num in numbers:
if num not in unique_elements:
unique_elements.add(num)
result.append(num)
return result