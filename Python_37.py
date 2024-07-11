def sort_even(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    result = []
    for i, x in enumerate(l):
        if i < len(even):
            result.append(even[i])
        else:
            result.append(x)
    return tuple(result)