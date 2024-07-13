n, m = int(input()), int(input())
total_outcomes = n * m
higher_outcomes = (n-1) * m
probability = higher_outcomes / total_outcomes
print(probability)