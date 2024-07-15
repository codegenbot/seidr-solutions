def dice_game(n, m):
    total = n * m
    higher_or_equal = sum(min(i, j) == i for i in range(1, n+1) for j in range(1, m+1))
    return (n*m - higher_or_equal) / total