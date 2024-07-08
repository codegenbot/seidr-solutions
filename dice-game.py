def dice_game(n, m):
    return (m-1) / n + sum((n-i) * (i+1) / (n*m) for i in range(m-2))