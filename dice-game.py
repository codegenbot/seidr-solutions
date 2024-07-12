n = int(input())
m = int(input())

total_outcomes = n * m
count_higher = 0

for i in range(1, n + 1):
    for j in range(1, m):
        if i > j:
            count_higher += 1

probability = count_higher / total_outcomes
print(probability)