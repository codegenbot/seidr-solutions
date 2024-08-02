def roll_dice(n, m):
    total = n * m
    higher_than_colin = sum(
        min(i, j) < i for i in range(1, n + 1) for j in range(1, m + 1)
    )
    return higher_than_colin / total if total > 0 else 0.0