def sort_even(l: list):
    return sorted(
        [x for x in l if x % 2 == 0],
        key=lambda x: (lambda y: (0 if isinstance(y, int) else float("inf"), y))(x),
    ) + [x for x in l if x % 2 != 0]