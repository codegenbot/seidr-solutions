n, m = int(input()), int(input())
if n > m:
    print(round((n-1) / n, 2))
elif m > n:
    print(round(n / m, 2))
else:
    print(0.5)