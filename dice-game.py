def dice_game(n, m):
    same = 1 / (n * m)
    greater = sum(1 / i for i in range(1, min(n, m) + 1)) - same
    return greater