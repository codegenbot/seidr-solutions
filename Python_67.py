```
def fruit_distribution(s, n):
    s = s.replace("apples", "1").replace("oranges", "0")
    parts = s.split()
    count = 0
    for i in range(len(parts)):
        if 'and' not in parts[i]:
            count += int(parts[i].translate(str.maketrans('ao', '10')).lstrip())
    return n - count