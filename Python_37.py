def sort_even(l: list):
    return sorted(
        [x for x in l if x % 2 == 0],
        key=lambda x: (0 if isinstance(x, int) else float("inf"), x),
    ) + [x for x in l if x % 2 != 0]