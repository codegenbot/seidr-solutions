def dice_game(n, m):
    if n == 1 or m == 1:
        return 0
    numerator = sum(1/i/j for i in range(1, n) for j in range(1, m))
    denominator = sum(i*m for i in range(1, n))  
    return (numerator - sum(min(i,j) for i in range(1,n) for j in range(1,m))) / denominator