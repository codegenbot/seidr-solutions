def sort_even(l: list):
    return [
        x if i % 2 != 0 else sorted([x for x in l if i % 2 == 0])[j]
        for i, x in enumerate(l)
        for j in range(len(l))
        if i == 2 * j
    ]