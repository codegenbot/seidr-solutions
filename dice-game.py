n, m = int(input()), int(input())
total_outcomes = n * m
higher_outcomes = sum(1 for i in range(1, n+1) for j in range(1, m+1) if i > j)
probability = round(higher_outcomes / total_outcomes, 8)
print("%.8f" % probability)