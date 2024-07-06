```
def dice_game(n, m):
    return sum(1 for i in range(min(n,m), n+1), j in range(1, min(m,n)+1)) / (n*m)