def dice_game(n, m):
    if n < m:
        return 0.0
    elif n == m:
        return 0.5
    else:
        total_outcomes = n * m
        outcomes_peter_wins = sum(1 for _ in range((m-1)*n, (m+1)*n))
        return outcomes_peter_wins / total_outcomes