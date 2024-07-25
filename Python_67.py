```
def fruit_distribution(s, n):
    s = s.lower().replace("apples", "1").replace("oranges", "0")
    parts = s.split()
    count = 0
    for i in range(len(parts)):
        if i < 2:
            continue
        if 'and' not in parts[i]:
            if parts[i].lstrip("0123456789").isalpha():
                count += int(parts[i].lstrip("0123456789"))
    return n - count