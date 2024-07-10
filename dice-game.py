```
def dice_game(n, m):
    return sum(1 for i in range(m+1) for j in range(i+m+1, n+m+2)) / (n * m)