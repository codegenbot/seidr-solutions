```
def dice_game(n, m):
    return (m - 1) / (n * m) + sum([1.0/(i*n) for i in range(1,m)])