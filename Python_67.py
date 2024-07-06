```
def fruit_distribution(s,n):
    s = s.replace('apples and', 'apples').replace('oranges', 'oranges apples')
    n -= int(s.split()[0].split(' ')[0])
    return n - int(s.split()[-1].split(' ')[0])