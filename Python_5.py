result = []
for i in range(len(numbers) - 1):
    result.extend([numbers[i], delimeter])
result.append(numbers[-1])
return result