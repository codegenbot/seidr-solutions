def dice_game(n, m):
    total = n * m
    prob = 0
    for i in range(1, m+1):
        prob += (m - i + 1) / total
    return prob