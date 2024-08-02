n = int(input())
m = int(input())

peter_wins = sum(1 for i in range(n + 1) if i > m)
total_outcomes = n * m
probability = peter_wins / total_outcomes

print(probability)