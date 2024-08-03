def sort_even(l: list):
    return [
        x if i % 2 != 0 else sorted([x for x in l if isinstance(x, int) and i % 2 == 0])[(i // 2)]
        for i, x in enumerate(l)
    ]