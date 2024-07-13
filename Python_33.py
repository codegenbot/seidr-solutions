def sort_third(lst):
    result = []
    for x in lst:
        if isinstance(x, (list, tuple)) and len(x) > 2:
            result.append(x[2])
        elif not isinstance(x, (list, tuple)):
            return [x]
    return tuple(sorted(result))