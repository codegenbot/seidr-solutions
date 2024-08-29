Here is the Python solution for the problem:

def dice_game(n, m):
    return (n-1) / (n*m - 1) if n > m else (m-1) / (n*m - 1)