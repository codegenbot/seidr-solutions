n, m = map(int, input().split())
print('{:.9f}'.format((n - 1) / n if n > m else 1/2 if n == m else m / (2 * n)))