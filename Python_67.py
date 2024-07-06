```
def fruit_distribution(s,n):
    s = s.replace('apples', 'a').replace('oranges', 'o')
    return n - int(s.split()[2].strip().replace('a','0').replace('o','0'))