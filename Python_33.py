def sort_third(l: list):
    l.sort(key=lambda x: ('BOOL' if isinstance(x, bool) else 'INT') + str(x).zfill(3))
    return l