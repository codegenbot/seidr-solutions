def dice_game(n, m):
    total_outcomes = n * m
    peter_win_count = sum(1 for i in range(m+1) 
                           for j in range(min(i+1,n),m+1)
                           if (n - j + 1) > i)
    return peter_win_count / float(total_outcomes)