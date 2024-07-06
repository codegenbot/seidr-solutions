def sort_even(l: list):
    return [l[i] if i % 2 != 0 else sorted([x for x in l if (i - 1) // 2 * 2 + 1 == j])[-1] for i, j in enumerate(l)]