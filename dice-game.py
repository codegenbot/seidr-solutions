n, m = int(input()), int(input())
print(round(sum([(n-i)/n for i in range(n) for j in range(m) if i < j])/n, 2)