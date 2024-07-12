def sort_even(l: list):
    return [x if i % 2 != 0 else min([y for y in l if (i - 1) // 2 == l.index(y)], default=x)
            for i, x in enumerate(l)]