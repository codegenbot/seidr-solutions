```
def fruit_distribution(s,n):
    s = s.replace('apples and', '').replace('oranges', '').split()
    return n - int(s[0].replace('apples', '')) - int(s[-1].replace('oranges', ''))