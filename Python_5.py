output = []
for num in numbers[:-1]:
    output.extend([num, delimeter])
if numbers:
    output.append(numbers[-1])
return output