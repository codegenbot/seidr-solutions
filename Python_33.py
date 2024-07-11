def sort_third(l: list):
    l.sort(key=lambda x: str(x).zfill(3))
    return l