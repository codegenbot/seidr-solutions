def dice_game(n, m):
    p_win = sum(1/(n*m) for i in range(min(m,n)-1)+range(min(m,n),n+m))
    return float(p_win)