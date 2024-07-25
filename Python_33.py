def sort_third(l):
    return [
        x if i % 3 != 0 else sorted([x for x in l if i % 3 != 0])
        for i, x in enumerate(l)
    ]