n = int(input())
m = int(input())

total_outcomes = n * m
successful_outcomes = 0

for i in range(1, n + 1):
    for j in range(1, m + 1):
        if i > j:
            successful_outcomes += 1

probability = successful_outcomes / total_outcomes
print(probability)