def sort_even(l: list):
    return [x if i % 2 else sorted([y for y in l[:i//2 + len(l) // 2] if y % 2 == 0])[-1]] if i < len(l) else [] for i, x in enumerate(l)]