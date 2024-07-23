```
import math
def dice_game(n, m):
    return sum([1/n for i in range(m)]) if n > m else 0