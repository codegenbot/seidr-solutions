def dice_game(n, m):
    total_outcomes = n * m
    strictly_higher_outcomes = sum(min(n-k, k-1) for k in range(1, min(m+1,n)+1))
    probability = strictly_higher_outcomes / total_outcomes
    return probability