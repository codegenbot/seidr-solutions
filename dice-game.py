n = int(input())
m = int(input())

if n <= 1 or m <= 1:
    print(0.0)
else:
    print((n * (n - 1) + (n * m)) / (2 * n * m))