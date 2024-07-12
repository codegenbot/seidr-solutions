def fruit_distribution(s, n):
    s = s.replace("apples and", "apples").replace("oranges", "")
    n -= int(s.split()[0].replace("apples", "").strip().replace("oranges", "")) - 1
    return n