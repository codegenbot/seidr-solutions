result = []
for num in numbers:
    result.extend([num, delimeter])
result.pop()  # remove the last delimiter added
return result