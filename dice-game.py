```
def dice_game(n, m):
    total_outcomes = n * m
    peters_win = (n-m)*(m+1) + sum(min(i,n)-i for i in range(m+1,n))
    return peters_win / total_outcomes