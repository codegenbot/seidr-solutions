def dice_game(n, m):
    total_outcomes = n * m
    peters_wins = sum(1 for i in range(1, n+1) for j in range(1, m+1) if i > j)
    rolls_the_same = sum(1 for i in range(1, n+1) for j in range(1, m+1) if i == j)
    return (peters_wins + rolls_the_same) / total_outcomes