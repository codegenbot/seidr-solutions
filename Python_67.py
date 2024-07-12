def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    parts = s.split()
    for i in range(2, len(parts)):
        if parts[i].isdigit():
            return int(i)