def sort_even(l: list):
    return [
        (
            l[i]
            if i % 2
            else sorted([x for x in l if (i // 2) * 2 <= j < (i // 2) * 2 + 2])[0]
        )
        for i, j in enumerate(l)
    ]