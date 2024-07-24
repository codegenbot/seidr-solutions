n = int(input())
m = int(input())
total_outcomes = n * m
favorable_outcomes = sum(1 for i in range(1, n + 1) for j in range(1, m + 1) if i > j)
probability = favorable_outcomes / total_outcomes
print(round(probability, 2))