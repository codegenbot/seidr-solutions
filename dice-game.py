n, m = map(int, input().split())
prob = sum((i/n) * ((i-1)/m) for i in range(2, n+1))
print('{:.8f}'.format(prob)) 