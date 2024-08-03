n = int(input())
m = int(input())
prob = sum((n-i) * i for i in range(1, n)) / (n * m)
print("{:.2f}".format(prob))