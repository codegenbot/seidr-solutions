def sort_third(l: list):
    return [
        x if i % 3 != 0 else sorted((y, idx) for idx, y in enumerate(l) if (idx - l.index(y)) % 3 != 0)[1]
        for i, x in enumerate(l)
    ]