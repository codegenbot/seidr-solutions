def sort_even(l: list):
    return [
        (
            l[i]
            if i % 2 != 0
            else sorted([x for x in l if (i // 2) * 2 <= idx < (i // 2 + 1) * 2])[0]
        )
        for i, idx in enumerate(range(len(l)))
    ]