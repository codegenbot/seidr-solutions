def dice_game(n, m):
    total_outcomes = n * m
    strictly_higher_outcomes = sum(min(i, j) for i in range(1, n+1) for j in range(1, m+1))
    higher_or_equal_outcomes = sum(sum((i >= j) for j in range(1, m+1))) + (n-1)*m
    probability = (total_outcomes - higher_or_equal_outcomes) / total_outcomes
    return probability