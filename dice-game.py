n, m = map(int, input().split())
print('{:.8f}'.format(max(0, (n - m + 1) / (n))))