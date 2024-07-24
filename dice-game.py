n = int(input())
m = int(input())
print(max(0, (n - 1) / n) if n > m else 0.5 if n == m else min(1, n / m))