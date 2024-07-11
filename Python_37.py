def sort_even(l: list):
    sorted_l = sorted((x if abs(x) % 2 != 0 else None for x in l))
    result = [x for x in sorted_l if x is not None] + [
        x
        for pair in zip(
            sorted([x for x in l if abs(x) % 2 == 0]), repeat(len(sorted_l) // 2)
        )
        for x in pair
    ]
    return tuple(result)