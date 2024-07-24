n = int(input())
m = int(input())

probability = 0
for i in range(1, n+1):
    for j in range(1, m):
        if i > j:
            probability += 1

print(probability / (n * m))