def dice_game(n, m):
    total_outcomes = n * m
    peters_highest_outcomes = 0
    for i in range(min(n, m), n):
        peters_highest_outcomes += m
    return peters_highest_outcomes / total_outcomes