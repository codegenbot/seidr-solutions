def sort_third(l: list):
    l.sort(key=lambda x: '000' if isinstance(x, bool) else ('0000' if not isinstance(x, int) else str(x).zfill(3)) or (int(str(x)),))
    return l