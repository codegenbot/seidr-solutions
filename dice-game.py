n = int(input())
m = int(input())

if n > m:
    print(round((n - m) / n, 8))
elif m > n:
    print(round((n / m), 2))
else:
    print(0.5)