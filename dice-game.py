def dice_game(n, m):
    return sum(
        1 / n / m for i in range(min(n, m) + 1) if (i + 1) * n > (min(n, m) - i) * m
    ) / min(n, m)