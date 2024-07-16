result = []
for number in numbers:
    result.extend([number, delimeter])
result.pop() if result else None
return result