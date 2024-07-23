```
def fruit_distribution(s,n):
    s = s.lower()
    words = s.split()
    apples = int(''.join(filter(str.isdigit, [word for word in words if 'apples' in word]))[:-1])
    oranges = int(''.join(filter(str.isdigit, [word for word in words if 'oranges' in word]))[:-1])
    return n - apples - oranges