```
import math
def dice_game(n, m):
    if n > m:
        return 1 - (m + (m-1) * math.gcd(m, n)) / (n * m)
    else:
        return 0