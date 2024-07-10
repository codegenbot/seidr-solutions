def fruit_distribution(s, n):
    s = s.replace("apples and", "apples").replace("oranges", "").replace(" ", "")
    return n - int(s.split()[0].split(" ")[0]) - 1