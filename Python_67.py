```
def fruit_distribution(s, n):
    s = s.replace("apples", "1").replace("oranges", "0")
    parts = s.split()
    total_count = set()
    for i in range(len(parts)):
        words = [x for x in parts[i].split() if x.isdigit()]
        total_count.update(words)
    return n - len(total_count)