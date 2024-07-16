def dice_game(n, m):
    return sum(1 for i in range(m+1) 
               for j in range(i, n+1)
               if (n - j + 1) > 0) / (n * m)