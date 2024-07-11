def sort_third(l: list):
    l.sort(key=lambda x: ('BOOL' if isinstance(x, bool) else 'INT') + str((('0' if not isinstance(x, bool) else x))).zfill(3)))
    return l