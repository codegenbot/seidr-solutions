def dice_game(n, m):
    total = n*m
    return sum(1 for i in range(1, n+1) for j in range(1, min(i,m)+1) if i > j) - sum(1 for i, j in zip(range(1, n+1), range(1, m+1)) if i == j) / total