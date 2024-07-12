n = int(input())
m = int(input())

count = sum(1 for i in range(1, n + 1) for j in range(1, m) if i > j)
probability = count / (n * m)
print(round(probability, 7))