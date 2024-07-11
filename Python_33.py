```
def sort_third(l: list):
    l.sort(key=lambda x: str(x).zfill(3) if isinstance(x, int) and x % 3 == 0 else str(x))
    return l