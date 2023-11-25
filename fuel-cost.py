numbers = []
for _ in range(2):
    numbers.append(int(input()))

total = sum([max(0, num//3 - 2) for num in numbers])
print(total)