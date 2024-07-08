def fruit_distribution(s, n):
    s = s.replace("apples and", "").replace("oranges", "").replace(" ", "")
    parts = s.split()
    if len(parts) > 1:
        return n - int(parts[0]) - int(parts[-2])
    else:
        return n