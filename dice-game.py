```
import math
def dice_game(n, m):
    return sum(1/(n+m-1) for _ in range(min(n,m))) / (n*m)