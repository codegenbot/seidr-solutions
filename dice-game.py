def dice_game(n, m):
    total_prob = 0
    for i in range(1, n+1):
        total_prob += (n - i + 1) / (n * m)
    return total_prob