n, m = int(input()), int(input())
print(max(0, min(n, m-1) / (n * m)) if n != m else 0.5)