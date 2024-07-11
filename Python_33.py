```
def sort_third(l: list):
    l.sort(key=lambda x: str(x) + '0' * (3 - len(str(x))))
    return l