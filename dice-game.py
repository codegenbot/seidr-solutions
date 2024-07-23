n, m = map(int, input().strip().split())
print('{:.8f}'.format((n * (n-1) + n * m) / (2 * n * m)) )