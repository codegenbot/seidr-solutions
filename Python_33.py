def sort_third(l):
    l.sort(key=lambda x: str(x) + '0' * (3 - len(str(x))))
    return l