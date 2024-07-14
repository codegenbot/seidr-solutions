def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(range(1, m))  
    return peters_win / total_outcomes