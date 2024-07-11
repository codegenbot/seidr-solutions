def fruit_distribution(s, n):
    s = s.lower()
    n = int(n)
    parts = s.split()[:-2]
    if len(parts) > 1:
        apples = sum(int(c) for c in parts[0] if c.isdigit())
        oranges = n - apples
    else:
        apples = sum(int(c) for c in parts[0] if c.isdigit())
        oranges = n - apples
    return oranges