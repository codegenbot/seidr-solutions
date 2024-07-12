n, m = int(input()), int(input())
total_outcomes = n * m
successful_outcomes = sum(n > m for n in range(1, n + 1))
probability = successful_outcomes / total_outcomes
print(probability)