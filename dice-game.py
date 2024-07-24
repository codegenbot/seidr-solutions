n = int(input())
m = int(input())
prob = sum([(n-i)/n * i/m for i in range(1, n)])
print(round(prob, 2))