def dice_game(n, m):
    total_prob = 0
    for i in range(1, m+1):
        for j in range(1, n+1):
            if j > i:
                total_prob += 1 / (n * m)
    return total_prob