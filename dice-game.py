def dice_game(n, m):
    return sum(1 for i in range(m+1) for j in range(1, min(i,m)+1) if i > j) / (n * m)