result = []
for number in numbers:
    result.extend([number, delimeter])
result.pop()
return result