def fruit_distribution(s, n):
    s = s.replace("apples and", "").replace("oranges", "").replace(" ", "")
    return n - int(s.split(" ")[0].split(" ")[-1]) - int(s.split(" ")[2])