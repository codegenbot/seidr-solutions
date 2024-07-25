```
def fruit_distribution(s, n):
    s = s.replace("apples", "1").replace("oranges", "0")
    parts = s.split()
    count = 0
    i = 2
    while i < len(parts):
        if parts[i].lower() == "and":
            break
        count += int(parts[i].lstrip("0123456789").replace('a', '1').replace('o', '0'))
        i += 1
    return n - count