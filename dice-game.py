```
import math

def dice_game(n, m):
    total_outcomes = math.prod(range(1,m+1))
    successful_outcomes = sum(math.comb(m-j, n-1) for j in range(m-n+1))
    return successful_outcomes / total_outcomes