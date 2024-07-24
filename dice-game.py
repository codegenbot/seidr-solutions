```
def dice_game(n, m):
    total_outcomes = n * m
    peters_wins = sum(1 for i in range(m) for j in range(i+1, n))
    return peters_wins / total_outcomes if total_outcomes > 0 else 0.0