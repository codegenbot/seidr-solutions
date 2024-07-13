def dice_game(n, m):
    total = min(n, m) * max(n, m)
    peters_wins = sum(1 for i in range(min(n, m)) for j in range(i+1, min(n, m)) if i > j-1)
    return peters_wins / total