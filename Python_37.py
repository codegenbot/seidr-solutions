def sort_even(l: list):
    return [
        (
            val
            if i % 2 == 1
            else sorted([x for x in l if (i // 2) * 2 <= j < ((i + 1) // 2) * 2])[0]
        )
        for i, val in enumerate(l)
    ]