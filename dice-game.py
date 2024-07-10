n, m = int(input()), int(input())
print("{:.2f}".format(sum([(n-i)/n for i in range(1, n+1)]) / n) if n < m else print("{:.2f}".format(sum([(m-i)/m for i in range(1, m+1)]) / m))