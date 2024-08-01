```
def sort_third(l: list):
    result = []
    for i, val in enumerate(l):
        if i % 3 != 0:
            result.append(val)
        else:
            temp = [x for x in l if i % 3 == 0 and (j := len(result) // 3) * 3 <= i < (j + 1) * 3]
            result.extend(sorted(temp))
    return result