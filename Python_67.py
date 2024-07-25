def fruit_distribution(s, n):
    s = s.replace("apples", "1").replace("oranges", "0")
    parts = s.split()
    count = 0
    for i in range(len(parts)):
        if 'and' not in parts[i]:
            if parts[i].lstrip("0123456789abcdefghijklmnopqrstuvwxyz").replace('a', '1').replace('o', '0'):
                count += int(parts[i].lstrip("0123456789abcdefghijklmnopqrstuvwxyz").replace('a', '1').replace('o', '0'))
    return n - count