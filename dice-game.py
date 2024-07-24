n = int(input())
m = int(input())
print(round(sum((n-i)/n for i in range(1, n+1) for j in range(1, m+1))/n, 2)