def dice_game(n, m):
    total = n * m
    higher_than_colin = sum(1 for i in range(max(m+1, n), n+1) for _ in range(m))
    return (higher_than_colin / total)