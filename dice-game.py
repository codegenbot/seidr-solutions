n = int(input())
m = int(input())

def probability_of_higher_roll(n, m):
    total_outcomes = n * m
    peter_wins_count = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                peter_wins_count += 1
    return peter_wins_count / total_outcomes

print(probability_of_higher_roll(n, m))