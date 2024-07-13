```
def dice_game(n, m):
    total = n*m
    peters_wins = sum(1 for i in range(m+1) for j in range(i+1, min(i+1, n)) if (i != j))
    return peters_wins / total