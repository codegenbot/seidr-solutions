def dice_game(n, m):
    total = n * m
    higher_than_colin = sum((min(i, j) < j) for i in range(1, n) for j in range(1, m)) + (n - 1) * (m - 1)
    return higher_than_colin / total