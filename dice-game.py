n, m = int(input()), int(input())
print(round(sum([(n-i)/n/m for i in range(n)]) / n, 2)