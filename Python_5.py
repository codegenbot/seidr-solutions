result = []
for num in numbers:
    result.extend([num, delimeter])
result.pop()  # remove the last delimeter
return result