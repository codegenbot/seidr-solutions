def dice_game(n, m):
    if n == 1 or m == 1:
        return 0
    numerator = sum(min(i,j)<i for i in range(1, n) for j in range(1, m))
    denominator = n*m
    return numerator / denominator