def sort_third(l: list):
    indices = {x: i for i, x in enumerate(l)}
    result = []
    for i, x in enumerate(sorted(l)):
        if len(result) > 0 and (i - indices.get(result[-1], i)) % 3 == 0:
            result.append(x)
        else:
            result.append(x)
            if len(result) >= 3:
                result.pop(indices[l.index(x)] % 3)
    return result