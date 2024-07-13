n, m = map(int, input().split())
total_outcomes = n * m
favorable_outcomes = 0

for i in range(1, n+1):
    favorable_outcomes += min(m, i-1)

probability = favorable_outcomes / total_outcomes
print(probability)