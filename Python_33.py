```
def sort_third(l: list):
    return [
        i if i % 3 != 0 else sorted([x for x in l_copy[:].copy() if x % 3 == 0])[-1]
        for i, l_copy in zip(l, [list(x) for x in l])
    ]