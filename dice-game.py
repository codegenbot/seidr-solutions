```
def dice_game(n, m):
    common_outcomes = min(n-1, m-1) + 1
    total_outcomes = n * m
    return (n - common_outcomes) / (total_outcomes - common_outcomes)