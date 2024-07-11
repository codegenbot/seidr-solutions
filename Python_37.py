def sort_by_type(evens, odds):
    result = []
    i = j = 0
    while i < len(evens) or j < len(odds):
        if j >= len(odds) or (i < len(evens) and -abs(odds[j-1]) > evens[i]):
            result.append(evens[i])
            i += 1
        else:
            result.append(odds[j])
            j += 1
    return result