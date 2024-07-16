n = int(input())
m = int(input())
total_outcomes = n * m
peter_winning_outcomes = 0

for i in range(1, n + 1):
    for j in range(1, m):
        if i > j:
            peter_winning_outcomes += 1

probability = peter_winning_outcomes / total_outcomes
print("{:.2f}".format(probability))