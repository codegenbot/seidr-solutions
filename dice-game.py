def dice_game(n, m):
    total = n * m
    peters_wins = sum((i > j) for i in range(1, n+1) for j in range(1, min(i,m)+1))
    return peters_wins / total