n = int(input())
m = int(input())

if n <= 1 or m <= 1:
    print(0.0)
elif n <= m:
    print(float(n - 1) / (n + m - 1))
else:
    print(float(n - m + 1) / (n + m - 1))