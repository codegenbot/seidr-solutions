def roll_dice(n, m):
    return sum(i / n for i in range(1, min(n, m) + 1)) - sum(
        min(m - 1 - i + 1, n - 1 - j + 1) / n / m for j in range(1, min(n, m) + 1)
    )