def sort_even(l: list):
    even_indices = l[1::2]
    return [
        x if i % 2 != 0 else y
        for i, (x, y) in enumerate(sorted(zip(even_indices, even_indices)))
    ]