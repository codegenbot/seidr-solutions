```Python
def fruit_distribution(s, n):
    s = s.replace(" apples", " apple").replace(" oranges", "")
    n -= (s.split().count('apple') + s.split().count('oranges')) - 1
    return n