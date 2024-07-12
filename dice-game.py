n = int(input())
m = int(input())
result = sum((n - i) * i for i in range(1, n)) / (n * m)
print(round(result, 2))