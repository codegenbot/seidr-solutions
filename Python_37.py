def sort_even(l: list):
    return [
        x for x in sorted([x for x in l if i % 2 == 0]) if i % 2 == 0 or i >= len(l)
    ]