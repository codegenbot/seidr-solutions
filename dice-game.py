n = int(input())
m = int(input())

def dice_game(n, m):
    total_outcomes = n * m
    peter_wins_outcomes = (n-1) * m
    probability = peter_wins_outcomes / total_outcomes
    return probability

print(dice_game(n, m))