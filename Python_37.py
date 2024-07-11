def sort_even(l: list):
    return [
        x if i % 2 != 0 else min([y for y in l if (i // 2) * 2 == j] or [None])[1]
        for i, (x, j) in enumerate(zip(l, range(len(l))))
    ]