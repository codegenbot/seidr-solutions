```
def fruit_distribution(s, n):
    s = s.lower()
    n = int(n)
    apples = 0
    if len(s.split()[:-2]) > 1 and any(char.isdigit() for char in s.split()[:-2][1]):
        apples = int("".join(filter(str.isdigit, s.split()[:-2])).split()[1])
    oranges = n - apples
    return oranges