def dice_game(n, m):
    total_prob = 0
    for i in range(1, n+1):
        for j in range(1, min(i, m)+1):
            if i > j: 
                total_prob += (1 / n) * (1 / m)
    return round(total_prob, 6)