def sort_third(l: list):
    result = []
    for i, val in enumerate(l):
        if i % 3 == 0:
            new_val = sorted([x for x in l if x % 3 == 0])[0]
        else:
            new_val = val
        result.append(new_val)
    return tuple(result)