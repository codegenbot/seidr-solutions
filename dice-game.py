def dice_game(n, m):
    total_outcomes = n * m
    colin_wins = sum(min(i, j) for i in range(1, n+1) for j in range(1, m+1))
    return (colin_wins / total_outcomes)