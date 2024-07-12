n = int(input())
total = sum([(num // 3 - 2) for num in range(1, n + 1)])
print(total)