def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(1 for i in range(min(n,m), n) if i < m)
    return favorable_outcomes / total_outcomes