def sort_even(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    odd = sorted([x for x in l if x % 2 != 0])

    result = []
    i, j = 0, 0
    while j < len(odd):
        result.append(odd[j])
        j += 1

    while i < len(even) or j > 0:
        if i < len(even) and (j == 0 or even[i] <= odd[j-1]):
            result.append(even[i])
            i += 1
        elif j > 0: 
            result.append(odd[j-1])
            j -= 1

    return tuple(result)