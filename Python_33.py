```
def sort_third(l: list):
    l.sort(key=lambda x: x[2] if len(x) > 2 else None)
    return l