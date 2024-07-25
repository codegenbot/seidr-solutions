n, m = int(input()), int(input())
print("{:.2f}".format(sum((n-i) * i for i in range(1, n+1)) / (n * m))