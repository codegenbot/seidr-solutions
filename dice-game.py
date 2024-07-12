n, m = int(input()), int(input())
if n < m:
    print(round((m-1) / (n * m), 2))
else:
    print(round(n / (n * m), 2))