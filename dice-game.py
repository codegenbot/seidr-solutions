```
def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(1 for _ in range(total_outcomes) 
                     if ((i+1)*m) < (j+1)*n for i in range(m-1) for j in range(n))
    return peters_win / total_outcomes