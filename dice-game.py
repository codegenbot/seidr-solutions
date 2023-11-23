n = int(input())
m = int(input())

if n <= 1 or m <= 1:
    print(0.0)
elif n >= m:
    print((n + 1) / (2 * m))
else:
    print((m - n + 1) / (m + n - 1))