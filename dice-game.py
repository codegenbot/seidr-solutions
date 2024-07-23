def dice_game(n, m):
    if n == m:
        return 0
    total_prob = 0
    for i in range(1, min(m, n)):
        total_prob += (min(m, n) - i) * 1 / (max(m, n))
    return round(total_prob, 6)