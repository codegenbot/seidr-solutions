Here is the solution:

def dice_game(n, m):
    if n < m:
        return 0.0
    else:
        return (m / (n + m - 1))