def fruit_distribution(s, n):
    s = s.replace(" apples and ", " ").replace(" oranges ", " ").split()
    n -= int("".join(c for c in s if c.isdigit()))
    return n