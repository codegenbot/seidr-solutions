n, m = map(int, input().split())
print("{:.2f}".format(sum([(n-i)/n * i/m for i in range(1, n)]) / n if n < m else sum([(m-i)/m * i/n for i in range(1, m)]) / m)