n = int(input())
m = int(input())

prob = sum([(n-i)/n for i in range(1, n+1)]) * (m / n)

print(round(prob, 2))