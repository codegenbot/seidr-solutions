n = int(input())
m = int(input())
if n == m:
    print(0.5)
elif n < m:
    print(round(n / (2 * m), 2))
else:
    print(round((n - 1) / (2 * m), 2))