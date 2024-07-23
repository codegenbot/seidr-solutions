def fruit_distribution(s, n):
    s = s.lower()
    n -= sum(1 for c in s if c.isdigit())
    n -= sum(1 for c in s if c in "ao" and c not in "o")
    return n