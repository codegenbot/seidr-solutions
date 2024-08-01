def sort_even(l: list):
    return [
        x if i % 2 != 0 else sorted([y for y in l if (j := i // 2) * 2 == i])[0]
        for i, x in enumerate(l)
    ]