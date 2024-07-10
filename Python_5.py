output = []
for num in numbers:
    output.extend([num, delimeter])
output.pop()
return output