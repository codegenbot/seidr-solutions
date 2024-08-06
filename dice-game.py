Here is the solution:

def dice_game(n, m):
    return (n-1)/n*m/(m+1) if n > m else (m-1)/m*n/(n+1)