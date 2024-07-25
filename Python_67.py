def fruit_distribution(s, n):
    s = s.replace("apples", "1").replace("oranges", "0")
    parts = s.split()
    count = 0
    for i in range(len(parts)):
        if "and" not in parts[i]:
            continue
        words = [x for x in parts[i].split() if x.isdigit()]
        count += sum(int(word) for word in words)
    return n - count