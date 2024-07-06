def sort_third(l: list):
    result = []
    for i, x in enumerate(l):
        if i % 3 != 0:
            result.append(x)
        else:
            min_element = min(l[i-2:i+1])
            result.append(min_element)
    return sorted(result)