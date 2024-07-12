def fruit_distribution(s,n):
    s = s.replace('apples', 'apple').replace('oranges', 'orange')
    s = s.split()
    n_apple = int(s.count('apple'))
    n_orange = int(s.count('orange'))
    return n - n_apple - n_orange