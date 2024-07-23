```
def fruit_distribution(s,n):
    s = s.lower()
    n -= int(''.join(filter(lambda x: str.isdigit(x), s))) + int(''.join(filter(lambda x: str.isdigit(x), [c for c in s if c != ' ' and c != 'o' and c != 'a'])))
    return n