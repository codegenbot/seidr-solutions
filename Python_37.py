def sort_even(l: list):
    return [x if i % 2 else sorted([y for j, y in enumerate(l) if j % 2 == (i // 2) % 2])[0] for i, x in enumerate(l)]