```
def dice_game(n, m):
    if n <= m:
        return 0
    total_outcomes = n * m
    peters_win = 1
    for i in range(m):
        peters_win *= (n - i)
    return peters_win / total_outcomes