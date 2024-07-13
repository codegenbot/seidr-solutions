```Python
def dice_game(n, m):
    return sum(1/j for j in range(1, n)) / (n * m)