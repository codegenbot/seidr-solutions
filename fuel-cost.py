numbers = []
for i in range(2):
    numbers.append(int(input()))

result = sum([math.floor(num/3)-2 for num in numbers])
print(result)