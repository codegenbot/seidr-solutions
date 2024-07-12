def fruit_distribution(s, n):
    s = s.replace("apples", str(n)).replace("oranges", str(n))
    parts = s.split()
    return (int(parts[-1]) // n) + 1