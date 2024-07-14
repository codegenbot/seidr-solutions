def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(1 for i in range(m+1, n) for j in range(1, m+1))
    colin_wins = sum(1 for i in range(1, m) for j in range(m+1, n+m+1))
    return (peters_win + total_outcomes - colin_wins) / total_outcomes