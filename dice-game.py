n, m = map(int, input().split())

count = 0
total = n * m

for i in range(1, n+1):
    for j in range(1, m+1):
        if i > j:
            count += 1

probability = count / total
print(probability)