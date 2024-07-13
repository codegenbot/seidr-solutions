n, m = int(input()), int(input())
if n >= m:
    print(round(sum(1 for i in range(n) for j in range(m) if i > j) / (n * m), 2))
else:
    print(round(sum(1 for i in range(n) for j in range(m) if i >= j) / (n * m), 2))