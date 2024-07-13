n = int(input())
m = int(input())

if n < m:
    print(round((m - n) / (n * m), 2))
else:
    print(round((n - m + 1) / (n * m), 2))