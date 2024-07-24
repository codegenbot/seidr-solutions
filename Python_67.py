```
def fruit_distribution(s,n):
    s = s.replace('apples and', 'apples').replace('oranges', 'oranges apples')
    n -= int(''.join(filter(str.isdigit, s))) + (int(''.join(filter(str.isdigit, [x for x in s.split() if x.isdigit()][0].split()[1:]))[0]) if [x for x in s.split() if x.isdigit()][0].split() else 0)
    return n