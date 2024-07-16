n = int(input())
m = int(input())
print('{:.2f}'.format(sum([(n-i)/n * i/m for i in range(1, n)]) if n < m else 0.5)