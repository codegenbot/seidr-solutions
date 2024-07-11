def sort_third(l: list):
    return [
        x if i % 3 != 0 else sorted([x for x in l if x % 3 == 0])[j]
        for j, x in enumerate(l)
    ]