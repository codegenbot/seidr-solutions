```Python
def sort_even(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    odd = sorted([x for x in l if x % 2 != 0])

    result = []
    i, j = 0, 0
    while i < len(even) or j < len(odd):
        if i < len(even) and (j >= len(odd) or even[i] <= odd[j]):
            result.append(even[i])
            i += 1
        elif j < len(odd): 
            result.append(odd[j])
            j += 1

    while j < len(odd):
        result.append(odd[j])
        j += 1

    return tuple(result)