def sort_even(l: list):
    return [
        (
            x
            if i % 2 != 0
            else sorted(
                [y for j, y in enumerate(sorted(l)) if j % 2 == 0],
                key=lambda z: [k for k, m in enumerate(l) if m == z].index,
            )[i // 2]
        )
        for i, x in enumerate(l)
    ]