```
def fruit_distribution(s, n):
    s = s.lower()
    n = int(n)
    apples = sum(int(x) for x in "".join(filter(str.isdigit, s.split()[-2])).split())
    oranges = n - apples
    return oranges