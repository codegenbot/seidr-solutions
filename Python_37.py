def sort_even(l: list):
    return [
        i if i % 2 else sorted([x for x in l[1:] if (y := i // 2) * 2 == y])[y]
        for i, y in enumerate(l)
    ]