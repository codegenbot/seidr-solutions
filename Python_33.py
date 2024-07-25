```
def sort_third(lst):
    result = []
    if len(lst) % 3 != 0:
        return [result]
    while len(lst) > 0:
        lst = [list(map(int, i.split(','))) for i in [i for i in (str(j) for j in lst) if isinstance(j, int)]]
        temp = [int(i[2]) for i in sorted(lst)]
        del lst[:]
        result.append(temp)
    return tuple(result)