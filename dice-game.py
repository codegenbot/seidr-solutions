import math
def dice_game(n, m):
    return sum((m-j)/math.prod(range(1,n+1)) for j in range(m-n+1))