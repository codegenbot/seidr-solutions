def dice_game(n, m):
    if n <= m:
        return 0
    total = sum(1.0/(n*m) for i in range(m+1, n+1))
    total += (m-1)/n
    return total