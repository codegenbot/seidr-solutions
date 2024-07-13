def dice_game(n, m):
    if n <= m:
        return 0
    total_outcomes = n * m
    peters_win = sum(range(1, min(n,m)+1)) + sum(range(m+1, n*m+1))
    return peters_win / total_outcomes