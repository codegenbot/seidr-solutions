n, m = map(int, input().split())
print('{:.8f}'.format((n * (n + 1) - m) / (2 * n * m)) if n > m else 0.0)