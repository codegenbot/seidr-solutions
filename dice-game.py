def dice_game(n, m):
    if n == 1 or m == 1:
        return 0
    numerator = sum(min(i, j) for i in range(1, n+1) for j in range(1, m+1)) - sum(min(max(i, 1), j) for i in range(1, n+1) for j in range(1, m+1))
    denominator = (n*m)**2  
    return numerator / denominator