```
def fruit_distribution(s,n):
    words = s.split()
    for i in range(len(words)):
        if words[i].endswith('apples'):
            apples = int(words[i-1])
        elif words[i].endswith('oranges'):
            oranges = int(words[i-1])
    return n - apples - oranges