n, m = map(int, input().split())
print('{:.8f}'.format((n * (n + 1) - m) / (2 * n * m)) if (n > 0 and m > 0) else 'Invalid input')