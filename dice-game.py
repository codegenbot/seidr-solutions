def dice_game(n, m):
    total = n * m
    higher_than_colin = sum(1 for i in range(1, n+1) for j in range(m, 0, -1) if i > j)
    return higher_than_colin / total