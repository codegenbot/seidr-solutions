def dice_game(n, m):
    if n < m:
        return 0.0
    elif n == m:
        return 0.5
    else:
        total = 0.0
        for k in range(m+1, n):
            total += (n-k)/n * m/(m+n)
        return total