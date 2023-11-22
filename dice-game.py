n = int(input())
m = int(input())

count = 0
for i in range(1, n+1):
    for j in range(1, m+1):
        if i > j:
            count += 1

probability = count / (n * m)
print(round(probability, 6))