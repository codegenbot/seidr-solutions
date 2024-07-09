```
def dice_game(n, m):
    if n == 1 or m == 1:
        return 0
    return (sum(min(i, j) for i in range(1, n+1) for j in range(1, m+1)) - (n*m)) / ((n*m)**2)