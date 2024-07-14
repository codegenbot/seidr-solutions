def dice_game(n, m):
    return sum(min(i/n, j/m) for i in range(1, n) for j in range(1, m+1)) if n > m else sum(min(i/m, j/n) for i in range(1, m+1) for j in range(1, n))