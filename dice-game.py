n, m = map(int, input().split())
print("{:.8f}".format((n * (n + 1) - n + m - 1) / (2 * n * m)))