def fruit_distribution(s, n):
    s = s.replace("apples and ", "")
    s = s.replace("oranges", "")
    return n - int(s.split()[0].replace("apples", "")) - 1