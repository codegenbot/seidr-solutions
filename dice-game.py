n = int(input())
m = int(input())

probability = 0 if m > n else (sum(range(m + 1, n + 1)) / (n * m))
print(probability)