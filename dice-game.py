def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(1 for i in range(m) for j in range(i+1) if (j*(m-1))<((n-1)-i))
    return peters_win / total_outcomes