def fruit_distribution(s, n):
    s = s.replace("apples and", "apples").replace("oranges and", "oranges")
    apples, oranges = map(int, [s.split()[1].split(" ")[0], s.split()[4].split(" ")[2]])
    return n - apples - oranges