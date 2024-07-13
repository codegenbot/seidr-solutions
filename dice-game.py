def dice_game(n, m):
    return sum(1 / (n * m) for i in range(min(n, m))) + sum(
        1 / (n * m) for j in range(max(n, m), min(n, m) + max(m, n - m + 1))
    )