n = int(input())
m = int(input())

total_outcomes = n * m
higher_outcomes = (n - 1) * m

probability = higher_outcomes / total_outcomes
print(round(probability, 2))