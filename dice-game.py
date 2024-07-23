def dice_game(n, m):
    total_prob = 0
    for i in range(1, min(m, n)):
        total_prob += (n - i) * (m - i) / (n * m)
    return round(total_prob,6)