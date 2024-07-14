def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(1 for i in range(m+1) for j in range(i) if min((i-1)*n+j, n*i) < n*m)
    return (peters_win / total_outcomes)