n, m = map(int, input().split())
print(f"{max(0, min(n, m) - 1) / (n * m):.8f}")