def fruit_distribution(s, n):
    s = s.replace("apples", "1").replace("oranges", "0")
    parts = s.split()
    total_count = 0
    for i in range(len(parts)):
        total_count += sum(int(x) for x in parts[i] if x.isdigit())
    return n - total_count