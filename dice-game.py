```
def dice_game(n, m):
    total_outcomes = n * m
    peter_win_count = sum(1 for i in range(m) 
                           if (n - 1) > i)
    return peter_win_count / float(total_outcomes)