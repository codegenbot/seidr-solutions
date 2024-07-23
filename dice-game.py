import math
def dice_game(n, m):
    return (math.comb(n, n-m) / (n**m))