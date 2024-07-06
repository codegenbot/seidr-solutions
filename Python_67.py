def fruit_distribution(s, n):
    s = s.replace("apples", "apple").replace("oranges", "orange")
    return n - int(s.split()[2].split(" ")[0]) - int(s.split()[4].split(" ")[0])