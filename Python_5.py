result = []
for num in numbers:
    result.extend([num, delimiter])
result.pop()
return result