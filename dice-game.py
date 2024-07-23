import math

def dice_game(n, m):
    return (math.comb(n + m - 1, n - 1)) / (n * m)