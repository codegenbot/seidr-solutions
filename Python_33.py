def sort_third(l: list):
    return [
        l[i] if i % 3 != 0 else sorted([x for x in l if (i - j) % 3 != 0])[0]
        for i, j in enumerate(l)
    ]