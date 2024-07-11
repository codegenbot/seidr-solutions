def fruit_distribution(s, n):
    s = s.replace("apples and", "apples").replace("oranges", "oranges ").split()
    n -= int(s[-2].replace("apples", "")) + int(s[-1].replace("oranges", ""))
    return n