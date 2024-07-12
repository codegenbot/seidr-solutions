result = []
for num in numbers:
    result.extend([num, delimeter])
result.pop()
return result