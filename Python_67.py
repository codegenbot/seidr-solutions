```
def fruit_distribution(s, n):
    s = s.lower()
    n -= sum(int(x) for x in s if x.isdigit())
    return max(0, n)