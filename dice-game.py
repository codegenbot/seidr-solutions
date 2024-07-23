def dice_game(n, m):
    total_rolls = n * m
    probability = (
        sum([1 for _ in range(m) for _ in range(1, min(n, k + 1))]) / total_rolls
    )
    return probability