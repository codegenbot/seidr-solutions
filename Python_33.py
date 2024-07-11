def sort_third(l):
    res = []
    others = [x for i, x in enumerate(l) if i % 3 != 0]
    sorted_others = sorted(others)
    
    for i, x in enumerate(l):
        if i % 3 == 0:
            res.append(x)
        else:
            res.append(sorted_others[0])
            if i % 3 < 2:
                sorted_others = sorted_others[1:]
    return res