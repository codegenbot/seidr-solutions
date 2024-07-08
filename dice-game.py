def dice_game(n, m):
    if n <= m:
        return 0
    total = sum((n-i)/(n*m) for i in range(1, m+1))
    total += (m-1)/n
    return min(total, 1)