```
def dice_game(n, m):
    total = n*m
    peters_wins = sum(1 for i in range(m+1) for j in range(i+1, min(n+1, i+2)) if (i+1 != j))
    return peters_wins / total