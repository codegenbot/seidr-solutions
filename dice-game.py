def dice_game(n, m):
    return (
        1 - sum(1 / total for total in range(m + 1))
        if n > m
        else sum(1 / total for total in range(n + 1))
    )