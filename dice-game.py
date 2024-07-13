n = int(input())
m = int(input())

count = 0
total_outcomes = n * m

for i in range(1, n+1):
    for j in range(1, m):
        if i > j:
            count += 1

probability = count / total_outcomes
print(probability)