def sort_third(l: list):
    return [
        x if i % 3 != 0 else y
        for i, x in enumerate(sorted([y for pair in zip(l, range(len(l))) for y, _ in sorted((pair[0],) + [(z, i) for z in l if z % 3 == 0])))
    ]