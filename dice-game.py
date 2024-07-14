def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(1 for i in range(max(1, (m+1)//n), min(m, n)) if i < n//2*m)
    return peters_win / total_outcomes