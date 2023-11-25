n = int(input())
m = int(input())
prob = 0.0

for i in range(1, n+1):
    for j in range(1, m+1):
        if i > j:
            prob += 1

prob /= (n * m)

print(prob)