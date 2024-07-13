def dice_game(n, m):
    total_outcomes = n * m
    strictly_higher_outcomes = (n - m) * m + sum((n-i) for i in range(1, min(m+1,n)))
    probability = strictly_higher_outcomes / total_outcomes
    return probability