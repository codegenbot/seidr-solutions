n = int(input())
m = int(input())

if n > m:
    print(round((n - 1) / n, 8))
elif m > n:
    print(round((m - 1) / m, 8))
else:
    print(0.5)