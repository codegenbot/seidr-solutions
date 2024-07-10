def incr_list(l: list):
    return [i + 1 if isinstance(i, int) else i for i in l]