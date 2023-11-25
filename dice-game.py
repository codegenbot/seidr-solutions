n = int(input())
m = int(input())
probability = 0
for i in range(1, n+1):
    for j in range(1, m+1):
        if i > j:
            probability += 1
result = probability / (n * m)
print(result)