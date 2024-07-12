n = int(input())
m = int(input())
total_outcomes = n * m
peter_winning_outcomes = sum([n - i for i in range(n)])
probability = peter_winning_outcomes / total_outcomes
print("{:.2f}".format(probability))