n, m = int(input()), int(input())
if n > m:
    print(1 - m / n)
elif m > n:
    print(1 - (m - 1) / n)
else:
    print(0)