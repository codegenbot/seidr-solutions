def dice_game(n, m):
    """Return the probability that Peter rolls strictly higher than Colin."""
    if m == 1:
        return 0
    elif n < m:
        return 1
    else:
        return round(1 - (m)/(n), 6)