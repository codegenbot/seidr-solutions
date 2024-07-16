result = []
for num in numbers:
    result.extend([num, delimeter])
result.pop()  # Remove extra delimiter at the end
return result