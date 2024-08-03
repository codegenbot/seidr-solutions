n, m = int(input()), int(input())
print("{:.2f}".format(sum([(n-i)/n/m for i in range(1, n)]) if n < m else sum([(m-i)/n/m for i in range(1, m)]))