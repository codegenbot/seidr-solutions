def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = 0
    for i in range(1, min(n,m)+1):
        if i <= m and i < n:
            favorable_outcomes += 1
    return favorable_outcomes / total_outcomes