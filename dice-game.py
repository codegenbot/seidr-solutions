n = int(input())
m = int(input())
print("{:.2f}".format(sum([(n - i) * i for i in range(1, n)]) / (n * m))