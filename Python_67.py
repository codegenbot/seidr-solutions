def fruit_distribution(s, n):
    s = s.replace("apples", "apple").replace("oranges", "orange")
    return n - int("".join(c for c in s if c.isdigit() or c == " "))