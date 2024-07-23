def dice_game(n, m):
    if n < m:
        return 1.0
    elif n == m:
        return 0.5
    else:
        return (m - 1) / n + sum((n-j-1) * 1/m for j in range(1,m))