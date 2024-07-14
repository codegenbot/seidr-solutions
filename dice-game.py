def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(1 for _ in range(m) for i in range(max(m-1,m)+1,n+1))
    return peters_win / total_outcomes