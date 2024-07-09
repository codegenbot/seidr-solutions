def fruit_distribution(s, n):
    s = s.lower()
    n -= int("".join(filter(str.isdigit, s)))
    return n