def sort_third(lst):
    result = sorted(((i,) + i) if isinstance(i, int) else i for i in lst)
    return [i[1] for i in result]