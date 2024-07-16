def dice_game(n, m):
    total_outcomes = n * m
    peter_win_count = sum(1 for i in range(min(n,m)) for j in range(1,i+1) for k in range(1,j+1)
                          if i > max(j-1,1) and j > max(k-1,1))
    return peter_win_count / float(total_outcomes)