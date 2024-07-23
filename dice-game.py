import math
def dice_game(n, m):
    return 1 - sum(1/math.factorial(i)*pow(m/i, i) for i in range(min(m, n)+1))