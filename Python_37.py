def sort_even(l: list):
    return [
        (x if i % 2 != 0 else sorted([y for j, y in enumerate(l) if j // 2 == l.index(y) // 2])[0])
        for i, x in enumerate(l)
    ]