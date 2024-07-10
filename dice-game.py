```
def dice_game(n, m):
    total_outcomes = n * m
    outcomes_peter_wins = 0
    for i in range(1, min(n, m)):
        outcomes_peter_wins += (n - i) * m
    return outcomes_peter_wins / total_outcomes