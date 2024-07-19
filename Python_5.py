result = []
for num in numbers:
    result.extend([num, delimeter])
result.pop()  # remove extra delimiter at the end
return result