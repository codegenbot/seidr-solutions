n = int(input())
total = sum((x // 3 - 2) for x in range(1, n + 1))
print(total)