def dice_game(n, m):
    total = n * m
    higher_rolls = (n - 1) * m + n
    return higher_rolls / total if n > m else (m - 1) * n / total