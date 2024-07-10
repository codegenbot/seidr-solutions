def dice_game(n, m):
    total_outcomes = n * m
    same_roll_outcomes = min(n, m)
    peters_highest_outcomes = total_outcomes - same_roll_outcomes
    return peters_highest_outcomes / total_outcomes