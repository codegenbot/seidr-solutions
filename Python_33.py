```
def sort_third(l: list):
    l.sort()
    l1 = [x for i, x in enumerate(l) if i % 3 == 0]
    l2 = [x for i, x in enumerate(l) if i % 3 == 1]
    l3 = [x for i, x in enumerate(l) if i % 3 == 2]

    return [
        (x if i % 3 != 0 else (x if i % 3 == 1 else l3.pop(0))) 
        if len(l3) > 0 else (x if i % 3 != 0 else x)
        for i, x in enumerate(l1 + l2 + list(reversed(l3)))
    ]