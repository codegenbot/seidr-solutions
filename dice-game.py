def dice_game(n, m):
    total_outcomes = n * m
    equal_outcomes = min(n, m)
    return 1 - (equal_outcomes / total_outcomes)