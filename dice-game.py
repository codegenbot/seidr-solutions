import math
def dice_game(n, m):
    prob_highest = (m - 1) / n
    prob_lower = sum((n - i) * (i + 1) / (n * m) for i in range(2, min(m, n)))
    return 1 - prob_highest - prob_lower