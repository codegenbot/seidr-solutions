n = int(input())
m = int(input())

total_outcomes = n * m
valid_outcomes = n - 1

probability = valid_outcomes / total_outcomes
print(probability)