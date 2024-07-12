n = int(input())
m = int(input())
if n < m:
    print(round((m - 1) / (n * m), 2))
else:
    print(round(m / (n * m), 2))