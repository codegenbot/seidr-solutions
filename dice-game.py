```
def dice_game(n, m):
    total_outcomes = n * m
    outcomes_colin_higher_or_equal = min(n, m)
    return (n - outcomes_colin_higher_or_equal) / total_outcomes