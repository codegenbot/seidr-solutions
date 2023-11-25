n = int(input())
m = int(input())

prob = 0.0
for i in range(1, n+1):
    prob += i * (min(i-1, m)) / (n * m)

print(prob)