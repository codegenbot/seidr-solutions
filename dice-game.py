def dice_game(n, m):
    total = n * m
    higher_than_colin = sum(1 for _ in range(m+1) for _ in range(n))
    return higher_than_colin / total