def fruit_distribution(s, n):
    s = s.replace("apples and", "apples ").replace("oranges", "oranges ")
    apples = int(s.split()[1].split(" ")[0])
    oranges = int(s.split()[3].split(" ")[0])
    return n - apples - oranges