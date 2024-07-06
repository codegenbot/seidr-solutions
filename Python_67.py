```
def fruit_distribution(s, n):
    s = s.replace("apples and ", "").replace("oranges ", "")
    return n - int(s.split()[0]) if s.split()[0].isdigit() else n