def dice_game(n, m):
    p_win = 0
    for i in range(1, n):
        for j in range(1, min(m, i)):
            p_win += (1/(n*m))
    return p_win / (n * m)