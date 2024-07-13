n = int(input())
m = int(input())
print(round(sum(1 / (n * m) * (n - i) / n for i in range(1, n)), 2))