def sort_even(l: list):
    evens = [x for x in l if x % 2 == 0]
    odds = sorted([x for x in l if x % 2 != 0], reverse=True)
    result = []
    i, j = 0, 0
    
    while i < len(evens) or j < len(odds):
        if i < len(evens):
            result.append(evens[i])
            i += 1
        elif j < len(odds):
            result.append(odds[j])
            j += 1
    
    return tuple(result)