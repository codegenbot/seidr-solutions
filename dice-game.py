n = int(input())
m = int(input())
prob = sum(n - x for x in range(1, n + 1)) / (n * m)
print("{:.2f}".format(prob))