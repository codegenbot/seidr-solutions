def getProbability(n, m):
    if n < 1 or m < 1:
        return "Invalid input"

    return (m - 1) / (n * m)