def sort_even(l: list):
    return [x if i % 2 != 0 else min(y for y in l if l.index(y) == (i // 2) * 2)
            for i, x in enumerate(l)]