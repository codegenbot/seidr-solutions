n = int(input())
m = int(input())
print(round(sum((n - i) / n * i / m for i in range(1, m)), 2))