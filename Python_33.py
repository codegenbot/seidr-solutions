def sort_third(l: list):
    result = []
    i = 0
    while i < len(l):
        sublist = [l[i], l[i + 1]] if i + 1 < len(l) else [l[i]]
        if len(sublist) == 2:
            third_element = min(sublist, key=lambda x: (x % 3, x))
            result.extend(sorted([y for y in sublist if y % 3 == 0]))[::-1]
            i += 3
        else:
            result.append(min(sublist))
            i += 1
    return tuple(result)