n, m = map(int, input().split())
print(f"{sum(1 for i in range(1, n + 1) for j in range(1, m + 1) if i > j) / (n * m):.8f}")