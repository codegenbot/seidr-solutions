n, m = int(input()), int(input())
prob = sum(n-i for i in range(1, n+1)) / (n*m)
print(round(prob, 2))