def sort_even(l: list):
    return [
        val if i % 2 != 0 else sorted([x for x in l if i % 2 == 0])[k]
        for k, val in enumerate(l)
    ]