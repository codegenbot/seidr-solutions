n = int(input())
m = int(input())

if n > m:
    print((n - m) / n)
elif n < m:
    print(0.0)
else:
    print(0.5)