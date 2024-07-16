n = int(input())
m = int(input())

if n > m:
    print(1 - m / n)
elif n < m:
    print(1 - (m - 1) / n)
else:
    print(0.0)