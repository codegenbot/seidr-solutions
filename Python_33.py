def sort_third(l: list):
    return [
        value if i % 3 != 0 else sorted([x for x in l if i % 3 == 0])[0]
        for i, value in enumerate(l)
    ]