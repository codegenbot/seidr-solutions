n = int(input())
m = int(input())

if n <= 1 or m <= 1:
    print(0.0)
elif n >= m:
    print((n - 0.5 + (m - n + 0.5) / (m * 1.0)) / n)
else:
    print((m - n + 0.5) / (m * 1.0))