n = int(input())
m = int(input())
probability = sum([(n - i) / (n * m) for i in range(1, n)])
print("{:.8f}".format(probability))