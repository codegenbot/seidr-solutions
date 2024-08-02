n = int(input())
m = int(input())
result = sum(1 for x in range(1, n + 1) for y in range(1, m + 1) if x > y) / (n * m)
print(round(result, 2))