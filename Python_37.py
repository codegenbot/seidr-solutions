def sort_even(l: list):
    l.sort() 
    even = [x for x in l if x % 2 == 0]
    odd = [x for x in l if x % 2 != 0]

    result = []
    i, j = 0, 0
    while i < len(even) or j < len(odd):
        if i < len(even) and (j >= len(odd) or even[i] <= odd[j]):
            result.append(even[i])
            i += 1
        else:
            result.append(odd[j])
            j += 1

    return tuple(result)