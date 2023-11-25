numbers = []
for _ in range(2):
    numbers.append(int(input()))

result = sum([(num // 3) - 2 for num in numbers])
print(result)