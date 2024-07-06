```
def fruit_distribution(s,n):
    s = s.replace('apples', 'a').replace('oranges', 'o')
    a = int(s.split()[2].replace('and', '').replace('apples', '')) 
    o = int(s.split()[4].replace('and', '').replace('oranges', '')) 
    return n - a - o