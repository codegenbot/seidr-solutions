n, m = map(int, input().split())
print('{:.8f}'.format((n * (n + 1) - m) / (2 * n * m)) if n >= 1 and m >= 1 else 0)