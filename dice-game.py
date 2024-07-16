n = int(input())
m = int(input())

total_outcomes = n * m
favorable_outcomes = sum(n - i for i in range(n))

probability = favorable_outcomes / total_outcomes
print(probability)