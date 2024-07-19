result = []
for num in numbers:
    result.extend([num, delimeter])
result.pop()  # Remove the last delimeter added
return result