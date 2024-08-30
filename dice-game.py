Here is the completed code:

def dice_game(n, m):
    return (n-1) / (n+m-2) if n > m else (m-1) / (n+m-2)