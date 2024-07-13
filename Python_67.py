```
def fruit_distribution(s,n):
    s = s.replace('apples and', '').replace('oranges', '').strip()
    return n - int(''.join(filter(str.isdigit, s))) - int(''.join(filter(str.isdigit, s)).split()[1].replace(' ', ''))