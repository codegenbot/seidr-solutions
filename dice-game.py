n = int(input())
m = int(input())
if n == m:
    print(0.5)
else:
    print(round((n - 1) / (n + m - 1), 2))