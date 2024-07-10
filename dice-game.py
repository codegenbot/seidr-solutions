def dice_game(n, m):
    return (
        sum(1 / (n * m) for k in range(m) for v in range(k + 1, n + 1))
        if n > m
        else sum(1 / (n * m) for k in range(n) for v in range(k + 1, m + 1))
    )