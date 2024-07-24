```
def fruit_distribution(s,n):
    s = s.replace('apples and', 'apples').replace('oranges', 'oranges apples')
    n -= int(''.join(filter(str.isdigit, s))) + (int(''.join(filter(str.isdigit, s.split()[0].split())[1])) if len(s.split()[0].split()) > 1 else 0)
    return n