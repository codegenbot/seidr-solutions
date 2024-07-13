n = int(input())
m = int(input())

total_outcomes = n * m
count_favors = 0

for i in range(1, n+1):
    for j in range(1, m):
        if i > j:
            count_favors += 1

probability = count_favors / total_outcomes
print(probability)