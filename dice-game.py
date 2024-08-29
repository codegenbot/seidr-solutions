```
def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(range(min(m+1,n),n+1)) - (min(m+1,n)-m-1)
    return favorable_outcomes / total_outcomes