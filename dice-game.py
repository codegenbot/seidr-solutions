def dice_game(n, m):
    return sum((n-i)/(n*m) for i in range(1, min(i for i in range(m+1) if (i+1)*m > n))) + min(1, 1/(2*n))