n, m = int(input()), int(input())
print('{:.2f}'.format((n - 1) / n if n > m else 0 if n == m else 1/2))