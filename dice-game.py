n = int(input())
m = int(input())
print((n - 1) / n if n > m else 0.5 if n == m else 1 - (m - 1) / m)