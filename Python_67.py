```
def fruit_distribution(s,n):
    s = s.replace('apples', '0').replace('oranges', '0')
    return n - int(s.split()[2].replace('and', '')) - int(s.split()[4].replace('and', ''))