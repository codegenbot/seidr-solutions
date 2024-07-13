def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(1 for i in range(m+1) for j in range(1, min(i, n)+1))
    probability = (peters_win + sum(1 for i in range(2, n+1) for j in range(1, m+1))) / total_outcomes
    return probability