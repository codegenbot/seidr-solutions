def dice_game(n, m):
    p_win = sum(1 for _ in range(min(m,n)) if n-_-1 > m-_-1 and (_+1)/(n*m))
    return sum(p_win) / (n * m)