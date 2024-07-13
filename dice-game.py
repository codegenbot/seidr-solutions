def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum([1 for _ in range(m-1)] + [i >= m and i < n for i in range(1, n*m+1)])

    return favorable_outcomes / total_outcomes