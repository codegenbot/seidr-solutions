def dice_game(n, m):
    if n <= m:
        return 0
    favorable_outcomes = sum(1 for _ in range(m))
    total_outcomes = n * m
    return 1 - (favorable_outcomes / total_outcomes)