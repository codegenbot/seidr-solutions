```
def dice_game(n, m):
    return sum(1/i if j > i else 0 for i in range(m) for j in range(i+1, n)) / (n * m)