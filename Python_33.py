```
def sort_third(l: list):
    l.sort(key=lambda x: str(x) if isinstance(x, int) else x)
    return l