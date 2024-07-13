n = int(input())
m = int(input())
total_outcomes = n * m
count_favorable_outcomes = sum(n - i for i in range(1, n))
probability = count_favorable_outcomes / total_outcomes
print(probability)