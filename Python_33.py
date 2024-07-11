def sort_third(l: list):
    return [
        min([x for x in l if i % 3 != (j % 3) and x]) if i % 3 == 0 else x
        for i, x in enumerate(sorted(l))
    ]