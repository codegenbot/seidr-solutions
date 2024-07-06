def dice_game(n, m):
    return sum(1 for i in range(m+1) if i < n*m//n - m//n) / (n * m)