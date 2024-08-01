n = int(input())
m = int(input())

total_outcomes = n * m
wins_for_peter = sum(n - i for i in range(n)) * m
prob = wins_for_peter / total_outcomes

print(prob)