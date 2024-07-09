def dice_game(n, m):
    equal_rolls = (min(n, m) - 1) / (n * m)
    return 1 - equal_rolls