```
def dice_game(n, m):
    if n < m:
        return 0.0
    elif n == m:
        return 1 / (n + m - 2)
    else:
        p_higher = (m - 1) / (n + m - 2)
        p_equal = 1 / (n + m - 2)
        return p_higher - p_equal