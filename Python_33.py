def sort_third(l: list):
    return [
        tuple(sorted([x for x in l[i : i + 3]])) if i < len(l) - 2 else x
        for i, x in enumerate(l)
    ]