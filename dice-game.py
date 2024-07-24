n = int(input())
m = int(input())
if n > m:
    print(round(sum([(n - i) / n for i in range(1, m + 1)]) / m, 2))
else:
    print(round(sum([(m - i) / m for i in range(1, n)]) / n, 2))