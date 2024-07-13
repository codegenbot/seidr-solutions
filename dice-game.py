def dice_game(n, m):
    total_outcomes = n * m
    probability = 0
    for i in range(1, min(n,m)+1):
        if i <= (m - (n - i)) and i <= (n - (m - i)):
            probability += 1
    return probability / total_outcomes