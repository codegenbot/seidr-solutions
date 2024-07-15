def dice_game(n, m):
    total = n * m
    higher_than_colin = sum(1 for _ in range(m) for i in range(max(1, m+1), n+1))
    return higher_than_colin / total