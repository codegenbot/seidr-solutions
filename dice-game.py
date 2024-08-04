n, m = int(input()), int(input())
prob = sum([1/(n*m) * i for i in range(n+1, n*m+1)])
print("{:.2f}".format(prob))