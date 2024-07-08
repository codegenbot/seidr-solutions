def dice_game(n, m):
    if n <= m:
        return 0
    total = sum(1/n for _ in range(m))
    return total + (n-m)/(n*m)