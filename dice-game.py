def dice_game(n, m):
    numerator = sum(1 for i in range(1, n+1) for j in range(1, m+1) if i > j)
    denominator = (n*m)**2  
    return numerator / denominator