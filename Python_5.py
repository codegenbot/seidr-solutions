result = []
for number in numbers:
    result.extend([number, delimeter])
result.pop()  # Remove the extra delimeter at the end
return result