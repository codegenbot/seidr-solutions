def sort_even(l: list):
    return [sorted([x for i, x in enumerate(l) if i % 2 == 0])[j] if i % 2 != 0 else x
            for i, x in enumerate(l)]