def dice_game(n, m):
    if n <= m:
        return 0
    total_outcomes = n * m
    peters_win = (n-m)*(m+1) 
    peters_tie = m*(m-1) 
    return (peters_win + peters_tie) / total_outcomes