n = int(input())
m = int(input())

if n <= 1 or m <= 1:
    print(0.0)
else:
    total_outcomes = n * m
    favorable_outcomes = (n - 1) * m
    probability = favorable_outcomes / total_outcomes
    print(round(probability, 2))