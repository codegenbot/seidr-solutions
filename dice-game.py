n, m = map(int, input().split())
print(f"{max(0, (n - 1) * m) / (n * m):.8f}")