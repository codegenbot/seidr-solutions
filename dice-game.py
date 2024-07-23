def roll_dice(n, m):
    total_outcomes = n * m
    peters_wins = sum(min(i, j) == i for i in range(1, n+1) for j in range(1, m+1))
    outcomes_where_peter_loses = total_outcomes - peters_wins

    return (peters_wins - outcomes_where_peter_loses) / total_outcomes