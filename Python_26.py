numbers_set = set()
result = []

for num in numbers:
    if num not in numbers_set:
        result.append(num)
        numbers_set.add(num)

return result