def dice_game(n, m):
    peter_win_count = sum(max(j, m-1) for i in range(m+1) 
                           for j in range(i+1, min(i+2, n+1)))
    total_outcomes = n * m
    return peter_win_count / float(total_outcomes)