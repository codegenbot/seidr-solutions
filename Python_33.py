def sort_third(lst):
    result = []
    while len(lst) > 0:
        temp = [i for i in sorted([i for _ in range(len(lst)), i])]
        del lst[:]
        result.append(tuple(temp))
    return tuple(result)