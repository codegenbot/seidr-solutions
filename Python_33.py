```
def sort_third(l: list):
    result = []
    for i, val in enumerate(l):
        if i % 3 != 0:
            result.append(val)
        else:
            sorted_group = [x for j, x in enumerate(l) if i % 3 == 0 and j == i // 3]
            result.append(sorted(sorted_group)[0])
    return result