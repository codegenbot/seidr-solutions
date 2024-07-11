def sort_even(l: list):
    return [
        x if i % 2 == 1 else sorted([y for y in l if i % 2 == 0])[i // 2]
        for i, x in enumerate(l)
    ]