def sort_even(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    odd = sorted([x for x in l if x % 2 != 0])

    result = []
    i, j = 0, 0
    while (i < len(even) and j < len(odd)):
        if even[i] <= odd[j]:
            result.append(even[i])
            i += 1
        else:
            result.append(odd[j])
            j += 1

    result.extend(even[i:])
    result.extend(odd[j:])

    return tuple(result)