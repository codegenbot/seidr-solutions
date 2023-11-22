n = int(input())
m = int(input())

def probability_of_peter_winning(n, m):
    total_outcomes = n * m
    peter_winning_outcomes = 0

    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                peter_winning_outcomes += 1

    probability = peter_winning_outcomes / total_outcomes
    return probability

print(probability_of_peter_winning(n, m))