n, m = int(input()), int(input())
print(round(sum([(n-i)/n for i in range(1, n+1) for j in range(1, m+1) if i > j])/(n*m), 2)