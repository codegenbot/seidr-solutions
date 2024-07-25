```
def sort_third(lst):
    result = []
    while len(lst) >= 3:
        triplets = [tuple(sorted([x[2], x[1], x[0]])) for x in zip(*[iter(lst)]*3)]
        del lst[:3]
        result.append([int(x[-1]) for x in sorted(triplets)])
    if len(lst) > 0:
        result.append([int(i[2]) for i in sorted([(i,) for i in lst])])
    return tuple(result)