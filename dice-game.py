n = int(input())
m = int(input())
print(round(sum([(n - i) / n * (m - i) / m for i in range(n)]) / n, 2))