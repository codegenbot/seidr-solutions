def dice_game(n, m):
    return (
        sum(1 / (n * m) for i in range(min(n, m), n + 1))
        if n > m
        else sum(1 / (m * n) for j in range(min(m, n) + 1, m + 1))
    )