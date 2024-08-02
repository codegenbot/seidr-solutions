```
def fruit_distribution(s,n):
    s = s.replace('apples and', 'apples ').replace('oranges and', 'oranges ')
    n -= int(s.split()[-2].split()[0]) + int(s.split()[-1].split()[0])
    return n