n = int(input())
m = int(input())

def dice_game(n, m):
    total_outcomes = n * m
    peter_wins_outcomes = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                peter_wins_outcomes += 1
    probability = peter_wins_outcomes / total_outcomes
    return round(probability, 2)

print(dice_game(n, m))