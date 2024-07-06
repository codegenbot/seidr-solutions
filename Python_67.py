def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    parts = s.split()
    for i, part in enumerate(parts[2:]):
        if part.isdigit():
            return n - int(part)
    return 0