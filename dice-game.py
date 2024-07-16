```
def dice_game(n, m):
    total_outcomes = n * m
    peter_win_count = sum(1 for i in range(m+1) for j in range(1,m+1)
                          if i + 1 > j and i <= n and j <= m)
    return peter_win_count / float(total_outcomes)