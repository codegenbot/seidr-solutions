```
import math
def dice_game(n, m):
    return sum(1/(m+1) for i in range(m)) - 1/m