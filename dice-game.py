def roll_dice(n, m):
    p_win_count = sum((i - j) * 1 for i in range(1, n + 1) for j in range(1, min(m, i)))
    return p_win_count / (n * m)