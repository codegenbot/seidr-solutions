def sort_even(l: list):
    return [sorted((l[i], l[(i + 1) % len(l)]))[0] if i % 2 != 0 else x for i, x in enumerate(l)]