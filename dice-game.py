n, m = int(input()), int(input())
total_outcomes = n * m
higher_outcomes = sum(1 for i in range(1, n+1) for j in range(1, m+1) if i > j)
probability = higher_outcomes / total_outcomes
probability = round(probability, 8)
print("%.8f" % probability)