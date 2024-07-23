def roll_dice(n, m):
    total_outcomes = n * m
    peters_wins = sum(1 for i in range(1, n+1) for j in range(1, m+1) if i > j or (i == j and i < n))
    colin_wins = sum(1 for i in range(1, n+1) for j in range(1, m+1) if j > i)

    return peters_wins / total_outcomes