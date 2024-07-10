```
def dice_game(n, m):
    return sum(1/(m**i)*1/(n**(m-i)) for i in range(1,m)) / (n*m)