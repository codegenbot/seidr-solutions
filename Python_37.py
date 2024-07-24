def sort_even(l: list):
    return [x if i % 2 != 0 else sorted([y for y, _ in zip(l, range(len(l))) if (_ - (i//2)*2) % 2 == 1])[0]
           for i, x in enumerate(l)]