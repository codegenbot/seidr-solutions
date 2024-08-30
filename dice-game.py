def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum([m for i in range(1, n)])  
    return peters_win / total_outcomes