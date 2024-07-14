def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(1 for i in range(max(m+1, n), n+m+1) for j in range(1, min(m, n)))
    return (peters_win / total_outcomes)