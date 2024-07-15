def dice_game(n, m):
    total_outcomes = n * m
    p_win = sum(1 if i > (j % n) else 0 for j in range(m) for i in range(1, n+1))
    return p_win / total_outcomes