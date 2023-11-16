
def histogram(test):
    d = {}
    for char in test:
        d[char] = d.get(char, 0) + 1
    return d
