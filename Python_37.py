def sort_even(l: list):
    return [
        (
            x
            if i % 2
            else sorted([y for y in l if (i // 2) * 2 <= j < ((i // 2) + 1) * 2])[0]
        )
        for i, x in enumerate(l)
    ]