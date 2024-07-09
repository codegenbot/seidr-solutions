def dice_game(n, m):
    total = 0
    for i in range(m):
        for j in range(i+1, min(n,m)):
            total += 1 / n if (j + 1) * n > (m - i) * m else 0
    return total / (n*m)