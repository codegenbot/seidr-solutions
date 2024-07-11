def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(1 for _ in range(m-1)) + sum(1 for i in range(m-1) for j in range(i+1, n))
    return favorable_outcomes / total_outcomes