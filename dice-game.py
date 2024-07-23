```
def dice_game(n, m):
    return sum((n-i)/(n*m) if i < m else (m-i+1)/(n*m) for i in range(1, min(n,m)+1))