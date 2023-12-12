n = int(input())
m = int(input())

def probability_of_higher(n, m):
    total_outcomes = n * m
    favorable_outcomes = (n * (n - 1)) // 2
    probability = favorable_outcomes / total_outcomes
    return probability

result = probability_of_higher(n, m)
print(result)