```
def sort_third(l: list):
    l.sort(key=lambda x: int(str(x)[2] or '0'))
    return l