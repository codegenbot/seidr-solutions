def dice_game(n, m):
    total_prob = 0
    for i in range(1, min(n, m)):
        total_prob += ((n - i) / n) * (m - 1)
    return round(total_prob,6)