```
def sort_third(l: list):
    result = []
    remaining_zeros = l.count(0)
    for i, x in enumerate(sorted([y for y in l if y != 0])):
        if i < remaining_zeros:
            result.extend([0] * 3)
        else:
            result.append(x)
    return [x for x in l if x == 0] + result