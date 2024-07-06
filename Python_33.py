def sort_third(l: list):
    result = []
    for i, x in enumerate(l):
        if i % 3 != 0:
            result.append(x)
        else:
            min_element = min(x for i, x in enumerate(l) if (i+1) % 3 == (i-2) % 3)
            result.append(min_element)
    return sorted(result)