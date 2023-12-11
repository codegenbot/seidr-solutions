n, m = map(int, input().split())
prob = sum([(n-i)/n * (m/m) for i in range(1, n+1)]) / n
print(prob)