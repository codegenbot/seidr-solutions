n = int(input())
total = sum([max(0, x // 3 - 2) for x in range(1, n + 1)])
print(total)