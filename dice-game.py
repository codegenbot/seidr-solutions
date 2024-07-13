def dice_game(n, m):
    total = n * m
    if n == m:
        return 0.5 
    else:
        sum1 = 0
        for i in range(1, m+1):
            sum1 += min(n-i, m)  
        return sum1 / total