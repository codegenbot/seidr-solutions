def roll_dice(n, m):
    p_win_count = sum(
        1 for i in range(min(n, m) + 1, n + 1) for j in range(1, min(m, i) + 1)
    )

    return p_win_count / (n * m)