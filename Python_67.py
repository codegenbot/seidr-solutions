```Python
def fruit_distribution(s, n):
    words = s.split()
    apples = False
    oranges = False
    for i in range(len(words)):
        if words[i].endswith("apples"):
            apples = True
        elif words[i].endswith("oranges"):
            oranges = True
    if apples:
        for _ in range(1, len(words)-1):
            n -= int(words[_]) + 11
    if oranges:
        for _ in range(1, len(words)-1):
            n -= int(words[_]) + 11
    return n