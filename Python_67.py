```
def fruit_distribution(s,n):
    s = s.lower()
    n = int(n)
    words = s.split()
    apples = int(''.join(filter(str.isdigit, [word for word in words if 'apples' in word])) or 0)
    oranges = n - apples
    return n - apples - oranges