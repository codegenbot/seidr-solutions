```
def median(l: list):
    l.sort()
    n = len(l)
    if n % 2 == 1:
        return l[n//2]
    else:
        mid1 = l[n//2 - 1]
        mid2 = l[n//2]
        return (mid1 + mid2) / 2