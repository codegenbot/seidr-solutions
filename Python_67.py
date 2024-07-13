```
def fruit_distribution(s,n):
    s = s.replace(' apples', '').replace(' oranges', '')
    s = s.split()
    return n - int(s[0].replace(' ', '')) - int(s[-1])