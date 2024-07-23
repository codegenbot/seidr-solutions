def sort_third(l: list):
    return [
        (
            val
            if i % 3 != 0
            else sorted([x for j, x in enumerate(l) if (j - k) % 3 != 0 and x == val])
        )
        for i, (k, val) in enumerate(sorted((i, i) for i in l))
    ]