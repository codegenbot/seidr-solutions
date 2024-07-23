def dice_game(n, m):
    total_prob = 0
    for _ in range(m):
        for i in range(1, n):
            if i > m:
                total_prob += 1 / m
    return round(total_prob,6)