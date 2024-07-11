def sort_even(l: list):
    return [
        (
            x
            if i % 2
            else min([y for y in l if i // 2 * 2 <= l.index(y) < (i // 2 + 1) * 2])
        )
        for i, x in enumerate(l)
    ]