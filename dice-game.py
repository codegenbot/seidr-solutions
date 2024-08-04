n, m = map(int, input().split())
probability = sum((n-i)*(m-j) for i in range(n) for j in range(m) if i > j) / (n*m)
print('{:.8f}'.format(probability))