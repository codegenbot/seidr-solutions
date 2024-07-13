def sort_third(lst):
    result = []
    for item in lst:
        if isinstance(item, (list, tuple)):
            if len(item) > 2:
                sorted_item = sorted([item[0], item[1], item[2]])
                result.append(tuple(sorted_item))
        else:
            result.append((item, None, None))
    return tuple(sorted(result, key=lambda x: x[2] if x[2] is not None else x[0]))