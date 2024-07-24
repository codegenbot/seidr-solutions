```
import math

def dice_game(n, m):
    p = 0
    for i in range(1, m+1):
        for j in range(i+1, n+1):
            p += 1 / (n * m)
    return p