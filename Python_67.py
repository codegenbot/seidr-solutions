def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    parts = s.split()
    for i in range(len(parts)-1, 2, -1): 
        if not parts[i].isdigit():
            return int(i)
    return -1