def sort_third(l: list):
    return [
        sorted([x for i, x in enumerate(l) if i % 3 == 0])[i % 3] if i % 3 == 0 else x
        for i, x in enumerate(l)
    ]