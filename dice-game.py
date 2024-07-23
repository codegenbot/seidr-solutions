n = int(input())
m = int(input())
result = sum(1 for i in range(1, n+1) for j in range(1, m+1) if i > j) / (n * 1.0 * m)
print(round(result, 8))