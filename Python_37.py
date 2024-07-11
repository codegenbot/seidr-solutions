def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = sorted([abs(x) for x in l if x % 2 != 0])  

    result = []
    i, j = 0, 0

    while i < len(evens) and j < len(odds):
        if evens[i] <= abs(odds[j]):
            result.append(evens[i])
            i += 1
        else:
            result.append(odds[j])
            j += 1

    result.extend(evens[i:])
    result.extend([-x for x in odds[j:]])
    
    return result