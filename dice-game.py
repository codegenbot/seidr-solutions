```
def dice_game(n, m):
    peter_win_count = sum(1 for _ in range(m) if min(_) + 1 > i+1)
    total_outcomes = n * m
    return peter_win_count / float(total_outcomes)