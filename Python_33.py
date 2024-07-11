def sort_third(l: list):
    return [
        x if i % 3 != 0 else sorted([j for j in l if (i - j) % 3 != 0])[::-1].pop(0)
        for i, x in enumerate(l)
    ]