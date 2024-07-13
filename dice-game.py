def dice_game(n, m):
    total_outcomes = n * m
    probability = 0
    for i in range(1, min(n,m)):
        if i < (m - (n - i)) or i > (n - (m - i)):
            probability += 1
    return probability / total_outcomes