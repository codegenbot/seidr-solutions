n, m = map(int, input().split())
print('{:.10f}'.format((n * (n+1)) / (2 * n * m)) if n < m else '{:.10f}'.format(1 - (m * (m+1)) / (2 * n * m)) if m < n else '0.0000000000')