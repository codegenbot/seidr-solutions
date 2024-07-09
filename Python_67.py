def fruit_distribution(s, n):
    s = s.replace("apples ", "")
    s = s.replace("oranges ", "")
    return n - int(s.split()[0].replace("and", "").split()[0]) - 1