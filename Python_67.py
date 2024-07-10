```
def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    parts = s.split()
    for i in range(len(parts)):
        if parts[i] == 'and':
            break
    return n - int(parts[i+1])