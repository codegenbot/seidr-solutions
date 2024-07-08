```
import math

def dice_game(n, m):
    p_colin_equal_or_higher = sum((m-i)*1/(n*m) for i in range(m)) + min(1, 1/(2*n))
    p_peter_higher = 1 - p_colin_equal_or_higher
    return p_peter_higher