```
def dice_game(n, m):
    return sum((i+1) < i//m*m + n for i in range(m-1)) / (n * m)