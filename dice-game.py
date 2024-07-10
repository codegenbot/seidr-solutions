def dice_game(n, m):
    total_outcomes = n * m
    peters_wins = sum((min(i, j) < i) for i in range(1, n+1) for j in range(1, m+1))
    colin_wins = sum((i < min(i, j)) for i in range(1, n+1) for j in range(1, m+1))
    return (peters_wins - colin_wins) / total_outcomes