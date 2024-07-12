n = int(input())
m = int(input())
total_outcomes = n * m
winning_outcomes = sum(1 for i in range(1, n+1) for j in range(1, m) if i > j)
probability = winning_outcomes / total_outcomes
print(round(probability, 2))