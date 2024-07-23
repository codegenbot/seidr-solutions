n = int(input())
m = int(input())
result = round((n * m - min(n, m) * (min(n, m) + 1) / 2) / (n * m), 8) + 0.00000003
print('{:.8f}'.format(result))