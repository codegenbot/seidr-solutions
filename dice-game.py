def dice_game(n, m):
    if n <= m: return 0
    total_outcomes = n * m
    peters_win = sum(1 for _ in range(m) for i in range(m+1, n))
    colin_wins = sum(min(i, k) == 1 for k in range(1, min(n, m)) for i in range(1, n))
    return (peters_win + colin_wins) / total_outcomes