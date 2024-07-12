n = int(input())
m = int(input())

total_outcomes = n * m
favorable_outcomes = n * (m - 1)

probability = favorable_outcomes / total_outcomes
print(probability)