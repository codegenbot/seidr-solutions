def dice_game(n, m):
    """Returns the probability that Peter rolls strictly higher than Colin."""
    return (n - 1) / (n * m - n - m + 1) if n > m else (m - 1) / (n * m - n - m + 1)