```
def dice_game(n, m):
    total_outcomes = n * m
    peters_wins = sum(1 for i in range(m+1) if i < (n-m+1))
    return peters_wins / total_outcomes