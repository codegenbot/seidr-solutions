n, m = int(input()), int(input())
print("{:.2f}".format(sum([(n-i)/n for i in range(1, n+1)]) * sum([m/j for j in range(1, m+1)]))