def dice_game(n, m):
    total_prob = 0
    for i in range(1, min(n, m) + 1):
        total_prob += (n - i) * (i - 1) / (n * m)
    return round(total_prob, 6)