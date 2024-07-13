def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum([1 for _ in range(m-1)] + [i*n//m for i in range(2,m+1)])

    return favorable_outcomes / total_outcomes