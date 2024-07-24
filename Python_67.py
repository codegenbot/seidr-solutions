def fruit_distribution(s, n):
    s = s.replace("apples", "1").replace("oranges", "2")
    s = s.replace("apple", "1").replace("orange", "2")
    return n - int(s.split()[0].split()[1]) - int(s.split()[2].split()[1])