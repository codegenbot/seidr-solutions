result = []
for num in numbers:
    result.extend([num, delimeter])
result.pop()  # Remove the extra delimiter at the end
return result