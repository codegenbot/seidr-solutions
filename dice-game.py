def dice_game(n, m):
    total = n * m
    peters_wins = sum(range(min(m-1, n), n))  
    return (peters_wins + min(n-1, m)) / total  