def dice_game(n, m):
    total = n * m
    if n == m:
        return 0.5
    else:
        sum1 = 0
        for i in range(1, min(n,m) + 1):
            sum1 += (n-i)*(m-i)
        if n > m:
            sum1 += (n-m)*(m+1)
        return sum1 / total