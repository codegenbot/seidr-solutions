def sort_third(l: list):
    l.sort(key=lambda x: str(x).zfill(3) if isinstance(x, int) else '000')
    return l