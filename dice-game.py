def dice_game(n, m):
    total_outcomes = n * m
    higher_or_equal_outcomes = sum(min(k-1, min(m+1,n)-k) for k in range(1, min(m+1,n)+1))
    probability = (higher_or_equal_outcomes - sum(min(m+1,n)-m for _ in range(m))) / total_outcomes
    return probability