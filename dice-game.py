```
def dice_game(n, m):
    total_outcomes = n * m
    peters_highest_count = sum(1 for i in range(min(n,m),n+1) for j in range(1,max(m,n)-i+1) if i > j)
    return peters_highest_count / total_outcomes