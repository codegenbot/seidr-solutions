```
def dice_game(n, m):
    return sum(1 for _ in range((m-1)*(n-1)) if n > m) / ((m-1)*(n-1)+1)