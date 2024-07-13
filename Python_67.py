```
def fruit_distribution(s,n):
    s = s.lower()
    n = int(n)
    words = s.split()
    apples = 0
    oranges = 0
    for word in words:
        if 'apples' in word:
            apples = int(''.join(filter(str.isdigit, word)))
        elif 'oranges' in word:
            oranges = int(''.join(filter(str.isdigit, word)))
    return n - apples - oranges