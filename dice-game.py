def dice_game(n, m):
    total_outcomes = n * m
    strictly_higher_outcomes = 0
    for i in range(1, min(n,m)):
        strictly_higher_outcomes += (n - i) * (m - n + i)
    probability = strictly_higher_outcomes / total_outcomes
    return probability