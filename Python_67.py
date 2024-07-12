```
def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    parts = s.split()
    count = 0
    for i in range(len(parts)):
        if parts[i] == 'and':
            break
        count += 1
    return n - int(count)