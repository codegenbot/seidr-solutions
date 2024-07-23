def dice_game(n, m):
    total_prob = 0
    for i in range(min(m-1, n-1), min(n, m) + 1):
        total_prob += (n - i) * (m - i) / (n * m)
    return round(total_prob, 6)