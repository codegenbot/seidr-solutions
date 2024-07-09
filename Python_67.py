```
def fruit_distribution(s, n):
    s = s.replace("apples ", "").replace("oranges ", "")
    total = int(s.split()[-1])
    return n - total