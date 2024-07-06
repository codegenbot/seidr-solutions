def sort_third(l: list):
    result = []
    for i, x in enumerate(l):
        if i % 3 != 0:
            result.append(x)
        else:
            min_element = min(y for j, y in enumerate(l) if (j+1) % 3 == i and j >= 0)
            result.append(min_element)
    return sorted(result)