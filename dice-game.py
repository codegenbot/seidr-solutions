n = int(input())
m = int(input())
print(round(sum((n - x) * x for x in range(1, n)) / (n * m), 2))