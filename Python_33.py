def sort_third(l: list):
    return [
        val if i % 3 != 0 else sorted([x for x in l if (i := idx) % 3 == 0])[0]
        for idx, val in enumerate(l)
    ]