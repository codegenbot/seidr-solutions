Here is the solution:

def dice_game(n, m):
    return (m - 1) / (n * m - 1) if n > m else 1 / (n * m - 1)