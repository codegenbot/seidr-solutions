n, m = int(input()), int(input())
print(round(sum([(n-i)/n for i in range(1, n+1)]) * sum([(m-i)/m for i in range(1, m+1)], 6))