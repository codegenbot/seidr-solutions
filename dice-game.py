```
import math
def dice_game(n, m):
    return 1 - sum(1 for k in range(m) for r in range(k+1, min(k+n, m)))/(n*m)