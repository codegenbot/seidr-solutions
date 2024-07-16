result = []
for num in numbers[:-1]:
    result.extend([num, delimiter])
result.append(numbers[-1])
return result