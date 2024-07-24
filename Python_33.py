def sort_third(l: list):
    return [
        sum(sorted([x for x in l[i - 1 : i + 2]])) if i < 3 else x
        for i, x in enumerate(l)
    ]