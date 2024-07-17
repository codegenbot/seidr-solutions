```
def dice_game(n, m):
    total_outcomes = n * m
    outcomes_where_peter_rolls_higher = sum(1 for i in range(m) for j in range(i+1, n+m))
    return outcomes_where_peter_rolls_higher / total_outcomes