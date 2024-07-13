def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(range(min(n,m)+1, n+1))
    return favorable_outcomes / total_outcomes