def dice_game(n, m):
    total_outcomes = n * m
    same_roll_outcomes = min(n, m)
    peters_highest_outcomes = sum(1 for i in range(min(m+1, n+1)) for j in range(i+1, max(m+1, n+1))) + same_roll_outcomes
    return peters_highest_outcomes / total_outcomes