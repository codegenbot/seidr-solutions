def dice_game(n, m):
    if n == m:
        return 0
    elif n > m:
        return (sum(range(1,n+1)) - sum(range(1,m+1))) / (n*m)
    else:
        return (sum(range(1,m+1)) - sum(range(1,n+1))) / (m*n)