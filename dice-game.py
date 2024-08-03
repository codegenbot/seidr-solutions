Here is the completed code:

def roll_higher(n, m):
    return (n - 1) / (n * m - n - m + 1) if n > m else (m - 1) / (n * m - n - m + 1)