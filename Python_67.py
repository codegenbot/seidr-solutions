```
def fruit_distribution(s,n):
    words = s.split()
    apples = int(''.join(filter(str.isdigit, [word for word in words if 'apples' in word.lower()])) or 0)
    oranges = int(''.join(filter(str.isdigit, [word for word in words if 'oranges' in word.lower()])) or 0)
    return n - apples - oranges