def sort_third(l: list):
    sorted_l = [x for i, x in enumerate(l) if i % 3 != 0] + sorted(
        [x for i, x in enumerate(l) if i % 3 == 0]
    )
    return [val if i % 3 != 0 else sorted_l[i // 3] for i, val in enumerate(l)]