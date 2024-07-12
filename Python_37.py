def sort_even(l: list):
    return [
        y if i % 2 == 0 else x
        for i, (x, y) in enumerate(sorted(zip(l, l[1:] + [l[-1]])), 1)
    ]