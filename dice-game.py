n = int(input())
m = int(input())
p = sum([1 for i in range(n) for j in range(m) if i > j]) / (n * m)
print(f"{p:.2f}")