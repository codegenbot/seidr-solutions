def fruit_distribution(s, n):
    s = s.replace('apples', 'apple').replace('oranges', 'orange')
    s = s.split()
    n_apple = s.count('apple')
    n_orange = s.count('orange')
    return n - n_apple - n_orange