```
def sort_third(l: list):
    result = []
    for i, val in enumerate(l):
        if i % 3 != 0:
            result.append(val)
        else:
            group = [x for x in l if i % 3 == 0 and j == i // 3]
            group.sort()
            result.append(group[0])
    return result