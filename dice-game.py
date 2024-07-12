n, m = int(input()), int(input())
print(max(0, (n - 1) / n) if n > m else (n - 1) / (2 * m))