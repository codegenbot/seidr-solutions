n = int(input())
m = int(input())

total_outcomes = n * m
favorable_outcomes = sum(n > m for n in range(1, n+1) for m in range(1, m+1))

probability = favorable_outcomes / total_outcomes
print(probability)