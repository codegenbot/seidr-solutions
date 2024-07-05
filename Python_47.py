def median(l: list):
    l.sort()
    n = len(l)
    mid = n // 2
    if n % 2 == 0:
        return (l[mid - 1] + l[mid]) / 2
    else:
        return l[mid]