def dice_game(n, m):
    total = n * m
    higher_than_colin = sum(1 for i in range(1, n) for j in range(1, m) if i > j)
    return higher_than_colin / total