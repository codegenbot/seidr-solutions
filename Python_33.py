def sort_third(l: list):
    return [
        x if i % 3 != 0 else sorted([i for i in l if i % 3 == 0])[0]
        for i, x in enumerate(l)
    ]