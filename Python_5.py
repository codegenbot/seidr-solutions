result = []
for num in numbers:
    result.extend([num, delimeter])
result.pop() if result else None
result = result[:-1]  # Remove the last delimeter