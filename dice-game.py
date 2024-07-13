def dice_game(n, m):
    total = n*m
    peters_wins = sum(1 for i in range(m+1) for j in range(i) if (j < 1 or j >= n) and (i != j))
    return peters_wins / total