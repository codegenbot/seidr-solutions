n = int(input())
m = int(input())
print(round(sum(1 / (n * m) for i in range(1, n + 1) for j in range(1, m) if i > j), 2))