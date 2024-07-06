```
def sort_third(l: list):
    l.sort(key=lambda x: x % 3)
    return tuple(l)