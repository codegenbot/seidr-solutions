def sort_third(l: list):
    return [
        x if i % 3 != 0 else sorted([y for j, y in enumerate(l) if (j - k) % 3 != 0])
        for i, x in enumerate(l)
    ]