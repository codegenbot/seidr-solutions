n = int(input())
m = int(input())
probability = 0.0
for i in range(1, n + 1):
    for j in range(1, m):
        probability += 1 / (n * m)
if n > m:
    probability += (n - m) / (n * m)
print(probability)