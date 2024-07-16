```
def dice_game(n, m):
    total_outcomes = n * m
    peter_win_count = (n - m) + sum(1 for _ in range(m-1))
    return peter_win_count / float(total_outcomes)