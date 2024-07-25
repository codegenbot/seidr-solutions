def fruit_distribution(s, n):
    s = s.replace("apples", "a").replace("oranges", "o")
    parts = s.split()
    count = 0
    for i in range(len(parts)):
        if i < 2:
            continue
        if 'and' not in parts[i]:
            if parts[i].lstrip("0123456789"):
                count += int(parts[i].lstrip("0123456789"))
    return n - count