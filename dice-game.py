def dice_game(n, m):
    total_prob = 0
    for i in range(1, min(m, n)):
        total_prob += (max(1, n-i) / n) * (m - i + 1) / m
    return round(total_prob, 6)