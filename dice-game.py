n, m = map(int, input().split())
if len([n, m]) != 2:
    raise ValueError("Input must contain exactly 2 values")
p = sum(1 for i in range(1, n + 1) for j in range(1, m + 1) if i > j) / (n * m)
print("{:.8f}".format(p))