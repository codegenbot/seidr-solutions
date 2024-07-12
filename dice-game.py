n = int(input())
m = int(input())

if n > m:
    print((n - m // 2) / (n * m))
elif n < m:
    print(1 - (n // 2) / m)
else:
    print(0.0)