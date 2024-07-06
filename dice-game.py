```
def dice_game(n, m):
    total_outcomes = n * m
    outcomes_peter_wins = (n - m)
    probability = outcomes_peter_wins / total_outcomes
    return probability