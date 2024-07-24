def sort_third(l: list):
    return [
        sum(sorted([x for x in l[i - 1 : i + 2]])) if len(l) > i+1 else x
        for i, x in enumerate(l)
    ]