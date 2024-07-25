n = int(input())
m = int(input())
prob = sum((n-i) for i in range(1, n)) / (n * m)
print("{:.8f}".format(prob))