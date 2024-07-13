Here is the Python code for the problem:

def dice_game(n, m):
    return sum(1/i**2 for i in range(1, min(n,m)+1)) / (n*m) if n > m else 0.5