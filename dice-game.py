n = int(input())
m = int(input())
result = round((n * m - min(n, m) * (min(n, m) + 1) / 2) / n / m, 7)
print('{:.7f}'.format(result))