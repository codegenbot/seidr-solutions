```
def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(1 for i in range(1, min(n, m)) for j in range(1, i) if (j*m)+(m-1)<i*n)
    return peters_win / total_outcomes