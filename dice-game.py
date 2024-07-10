```
def dice_game(n, m):
    if n > m:
        return sum(1/i for i in range(1, n-m+1)) / (n*m)
    else:
        return sum(1/i for i in range(1, m-n+1)) / (m*n)