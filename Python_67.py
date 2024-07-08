def fruit_distribution(s, n):
    s = s.replace("apples and", "").replace("oranges", "").replace(" ", "")
    parts = s.split()
    if len(parts) < 3:
        return n
    return n - int(parts[-1]) - int(parts[2])