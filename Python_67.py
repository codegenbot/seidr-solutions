def fruit_distribution(s, n):
    s = s.replace("apples and", "apples").replace("oranges", "")
    n -= int(s.split()[0].replace("apples", "")) + int(s.split()[-1])
    return n