result = []
for n in numbers:
    result.extend([n, delimeter])
result.pop()
return result