n = int(input())
m = int(input())

if n > m:
    print((n - m) / n)
elif n < m:
    print(1 - (n / m))
else:
    print(0.0)