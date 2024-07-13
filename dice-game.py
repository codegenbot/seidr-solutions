def dice_game(n, m):
    if n <= m:
        return 0
    total_outcomes = n * m
    peters_win = sum(1 for _ in range(m) for i in range(max(1, m+1), min(n, m-1)+1))
    return peters_win / total_outcomes