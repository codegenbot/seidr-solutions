n = int(input())
m = int(input())
if n < m:
    print(round(sum([(n - 1) / n * (m - i) / m for i in range(1, m)]), 2))
else:
    print(round(sum([n / m for i in range(m + 1, n + 1)]), 2))