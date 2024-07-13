def dice_game(n, m):
    total = n*m
    peters_wins = sum(1 for _ in range(m))  
    return peters_wins / total