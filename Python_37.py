def sort_even(l: list):
    return [
        x if i % 2 != 0 else min([x, l[(i + 1) % len(l)]]) if (i + 1) % 2 == 0 else min([x, l[i - 1]])
        for i, x in enumerate(l)
    ]