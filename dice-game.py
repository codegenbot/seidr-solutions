```
def dice_game(n, m):
    total = 0
    for i in range(1, min(n,m)+1):
        total += (n-i+1)/(n*m)
    return min(total, 1)