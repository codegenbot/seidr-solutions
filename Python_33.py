```Python
def sort_third(l: list):
    if len(l) % 3 != 0:
        l += [None] * ((len(l) + 2) // 3 * 3 - len(l)) + [None] * ((len(l) + 1) % 3)

    l1 = sorted([x for i, x in enumerate(l) if i % 3 == 0])
    l2 = sorted([x for i, x in enumerate(l) if i % 3 == 1])
    l3 = sorted([x for i, x in enumerate(l) if i % 3 == 2 and x is not None], reverse=True)

    result = []
    index = 0
    for _ in range(len(l) // 3):
        result.extend([l1[index], l2[index], l3.pop(0)])
        index += 1

    if len(l) % 3 == 2:
        result.extend([l1[index], l2[index]])
    elif len(l) % 3 == 1:
        result.append(l1[index])

    return [x if x is not None else None for x in result]