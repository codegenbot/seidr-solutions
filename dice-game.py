import sys

def probability_of_higher_rolls(n, m):
    if n <= 0 or m <= 0:
        return 0.0
    total_outcomes = n * m
    favorable_outcomes = (n - 1) * m
    return favorable_outcomes / total_outcomes

n = int(sys.stdin.readline().strip())
m = int(sys.stdin.readline().strip())

result = probability_of_higher_rolls(n, m)
print(result)