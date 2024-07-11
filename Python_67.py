def fruit_distribution(s, n):
    s = s.replace("apples and ", "")
    s = s.replace("oranges and ")
    n_apples = int(s.split()[0].replace("apples ", ",").replace("apples", ""))
    n_oranges = int(s.split()[1].replace("oranges ", ",").replace("oranges", ""))
    return n - n_apples - n_oranges