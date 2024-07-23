```Python
import math
def dice_game(n, m):
    return sum(1 for i in range(m+1) if i / m < (n - 1) / (n + m - 1)) / (m * n)