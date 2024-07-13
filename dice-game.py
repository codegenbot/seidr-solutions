Here is the solution:

def dice_game(n, m):
    return (n-1)/max(n, m) if n > m else (m-1)/max(n, m)