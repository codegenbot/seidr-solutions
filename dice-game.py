n = int(input())
m = int(input())

peter_probability = sum([1 for i in range(1, n + 1) for j in range(1, m + 1) if i > j]) / (n * m)
print(peter_probability)