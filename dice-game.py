def dice_game(n, m):
    if n <= m:
        return 0
    total = sum((n-i)/(n*m) for i in range(1, m+1))
    return total + min(1, (m-1)/2/n)