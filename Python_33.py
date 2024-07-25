def sort_third(lst):
    result = []
    while len(lst) > 0:
        temp = [i for _ in range(len(lst))] + sorted(lst)
        del lst[:]
        result.append(tuple(temp))
    return tuple(result)