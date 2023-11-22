import sys

n = int(sys.stdin.readline().strip())
m = int(sys.stdin.readline().strip())

total_outcomes = n * m
higher_outcomes = (n - 1) * m

probability = higher_outcomes / total_outcomes

print(round(probability, 6))