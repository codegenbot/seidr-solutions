import math
def dice_game(n, m):
    if n < m:
        return 0
    else:
        numerator = 0
        denominator = n * m
        for i in range(m+1):
            numerator += (n - i)
        return numerator / denominator