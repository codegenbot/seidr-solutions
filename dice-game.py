def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(1 for _ in range(m+1) if _ < (n - m))
    return favorable_outcomes / total_outcomes