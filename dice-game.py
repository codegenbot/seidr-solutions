def roll_dice(n, m):
    prob = 0
    for i in range(1, n+1):
        for j in range(1, min(i, m)+1):
            if i > j:
                prob += 1 / (n * m)
    return prob