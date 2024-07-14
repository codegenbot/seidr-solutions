```
def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(1 for i in range(m+1, n) for j in range(1, m+1))
    return peters_win / total_outcomes if total_outcomes > 0 else 0.0