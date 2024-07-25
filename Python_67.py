def fruit_distribution(s, n):
    s = s.replace("apples", "1").replace("oranges", "0")
    parts = s.split()
    count = 0
    for i in range(len(parts)):
        if parts[i].startswith('1'):
            count += int(parts[i].lstrip('0123456789abcdefghijklmnopqrstuvwxyz'))
    return n - count