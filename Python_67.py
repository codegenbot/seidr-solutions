```
def fruit_distribution(s,n):
    s = s.lower()
    n = int(n)
    words = s.split()
    for i in range(len(words)):
        if 'apples' in words[i]:
            apples = int(words[i-1])
        elif 'oranges' in words[i]:
            oranges = int(words[i-1])
    return n - apples - oranges