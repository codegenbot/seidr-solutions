n = int(input())
m = int(input())
print(round(sum((n - i - 1) / n * i / m for i in range(n)), 2))