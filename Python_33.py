def sort_third(l: list):
    l.sort(key=lambda x: ('BOOL' if isinstance(x, bool) and x else 'INT' if isinstance(x, int) else 'STR') + str(x).zfill(3))
    return l