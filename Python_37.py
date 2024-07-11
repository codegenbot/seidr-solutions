def sort_even(l: list):
    even = sorted([x for x in l if abs(x) % 2 == 0])
    result = []
    idx = 0
    for x in l:
        if abs(x) % 2 == 0:
            result.append(even[idx])
            idx += 1
        else:
            result.append(x)
    return tuple(result)