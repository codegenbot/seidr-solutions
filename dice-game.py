```
def dice_game(n, m):
    if m < n:
        return (m-1) / (n * m)
    else:
        return 0