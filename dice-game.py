n = int(input())
m = int(input())
if n > m:
    print(round((n - 1) / (n * m), 2))
else:
    print(round(n / (n * m), 2))