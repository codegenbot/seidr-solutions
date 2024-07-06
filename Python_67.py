```
def fruit_distribution(s,n):
    s = s.replace('apples', '1').replace('oranges', '2')
    return n - int(s.split()[0].replace('and', '').strip().replace(' ', '')) - int(s.split()[-1].replace(' ', ''))