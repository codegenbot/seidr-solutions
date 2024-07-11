```Python
def fruit_distribution(s, n):
    s = s.lower()
    n = int(n)
    apples = int("".join(filter(str.isdigit, s.split()[:-2])).split()[0])
    oranges = int("".join(filter(str.isdigit, s.split()[:-2])).split()[1])
    return n - (apples + oranges)