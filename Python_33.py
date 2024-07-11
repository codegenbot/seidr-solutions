def sort_third(l: list):
    l.sort(key=lambda x: ('BOOL' if isinstance(x, bool) else 'INT' if isinstance(x, int) and not isinstance(x, str) else 'STR') + str(x).zfill(3))
    return l