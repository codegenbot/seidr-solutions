def sort_third(l):
    result = sorted([item for item in l if item % 3 == 0])
    return tuple(result)