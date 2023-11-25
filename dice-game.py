n = int(input())
m = int(input())

probability = sum([(n - i) * i for i in range(1, n)]) / (n * m)
print(probability)