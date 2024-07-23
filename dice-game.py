n = int(input())
m = int(input())
print(round(sum((n - i) / n for i in range(1, n)) * m / n, 8))