```Python
def fruit_distribution(s, n):
    words = s.split()
    apples_count = 0
    oranges_count = 0
    for i in range(len(words)):
        if words[i].endswith("apples"):
            apples_count += 1
        elif words[i].endswith("oranges"):
            oranges_count += 1
    n -= int(words[words.index('apples')-1]) + (11 * apples_count)
    n -= int(words[words.index('oranges')-1]) + (11 * oranges_count)
    return n