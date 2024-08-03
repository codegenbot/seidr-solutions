Here is the solution:

def dice_game(n, m):
    return (n-1)/n if n > m else (m-1)/m if n < m else 0.5