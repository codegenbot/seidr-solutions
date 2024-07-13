def dice_game(n, m):
    return sum(
        1
        for x in range(min(n, m) + 1, min(n, m) + max(n, m) + 1)
        if (n - m + 1) < len(str(x))
        and len(set(map(int, str(x)))) == 1
        and x >= min(n, m)
    ) / (n * m)