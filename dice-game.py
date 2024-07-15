def dice_game(n, m):
    total = n * m
    higher_than_colin = sum(min(i, j) + 1 for i in range(1, n+1) for j in range(1, m+1)) - (n + m)
    same_cases = min(n, m)
    return (higher_than_colin - same_cases) / total