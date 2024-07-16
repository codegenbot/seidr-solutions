n = int(input())
m = int(input())
print(round(sum(1 / (n * m) for i in range(n) for j in range(m) if i > j), 2))