def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = sorted([abs(x) for x in l if x % 2 != 0])  
    result = []
    i, j = 0, 0

    while i < len(evens) or j < len(odds):
        if j < len(odds):
            if i < len(evens):
                if evens[i] <= odds[j]:
                    result.append(evens[i])
                    i += 1
                else:
                    result.append(-evens[i])
                    i += 1
            else:
                result.append(odds[j])
                j += 1
        elif j < len(odds):
            result.append(odds[j])
            j += 1

    return result