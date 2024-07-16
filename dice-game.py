def dice_game(n, m):
    peter_win_count = sum((n - k) for i in range(m+1) 
                           for k in range(1, min(i+1, m+1)))
    total_outcomes = n * m
    return peter_win_count / float(total_outcomes)