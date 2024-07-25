result = []
for num in numbers:
    result.extend([num, delimiter])
return result[:-1]