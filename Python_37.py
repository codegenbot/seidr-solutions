def sort_even(l: list):
    evens = [x for x in l if x % 2 == 0]
    odds = sorted([x for x in l if x % 2 != 0], reverse=True)
    result = []
    i, j = 0, 0

    while i < len(l) or j < len(odds):
        if i < len(l) and (j == len(odds) or l[i] <= odds[j]):
            result.append(l[i])
            i += 1
        else:
            result.append(odds[j])
            j += 1

    return tuple(result)