def sort_even(l: list):
    result = []
    i = 0
    for x in l:
        if x % 2 == 0:
            result.insert(i, [x, None])
            i += 1
        else:
            while len(result) > i and result[i][0] % 2 != 0:
                i += 1
            result.insert(i, [None, x])
    return [[x[0], x[1]] for x in result if x[0] is not None or x[1] is not None]