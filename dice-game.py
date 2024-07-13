n = int(input())
m = int(input())

total_outcomes = n * m
favorable_outcomes = (n-1) * m

probability = favorable_outcomes / total_outcomes
print(probability)