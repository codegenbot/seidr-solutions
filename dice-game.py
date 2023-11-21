n = int(input())
m = int(input())

if n <= 1 or m <= 1:
    print(0.0)
else:
    total_outcomes = n * m
    higher_outcomes = n - 1
    probability = higher_outcomes / total_outcomes
    print(round(probability, 8))