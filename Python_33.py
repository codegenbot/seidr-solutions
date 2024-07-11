```
def sort_third(l: list):
    l.sort(key=lambda x: '000' if not isinstance(x, int) else str(x).zfill(3))
    return l

print(sort_third([123, "abc", 45, None, "def"]))