def fruit_distribution(s,n):
    s = s.replace('apples', ' ')
    s = s.replace('oranges', ' ')
    n -= int(s.split()[2].replace('and', '')) + int(s.split()[4].replace('and', ''))
    return n