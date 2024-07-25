def sort_third(l):
    sorted_middle = sorted([x for i, x in enumerate(l) if i % 3 != 0])
    return (
        [x for i, x in enumerate(l) if i % 3 == 0]
        + [y for y in sorted_middle]
        + [x for i, x in enumerate(l) if i % 3 != 0 and x not in sorted_middle]
    )