```
def fruit_distribution(s, n):
    s = s.lower()
    n = int(n)
    apples = int("".join(filter(str.isdigit, s.split()[:-2])).split()[1]) if len(s.split()[:-2]) > 1 else 0
    oranges = n - apples
    return oranges