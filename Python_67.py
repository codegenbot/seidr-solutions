def fruit_distribution(s, n):
    s = s.replace("apples and ", "")
    s = s.replace("oranges", "orange")
    if s.endswith("s"):
        s = s[:-1]
    return n - int(s.split()[0].replace("apples", "")) - 1