def dice_game(n, m):
    p_win = sum(1/(n*m) for _ in range(min(m,n)-1)) 
    return (p_win) / (n * m)