Here is the solution:

def dice_game(n, m):
    return (n - 1) / max(m, n) if n > m else (m - 1) / max(m, n)