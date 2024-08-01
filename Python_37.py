def sort_even(l: list):
    return [x if i % 2 != 0 else sorted([y for y in l if (i // 2) * 2 == k and k < len(l)])[
            0] for i, x in enumerate(l)]