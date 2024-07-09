from collections import OrderedDict


def sort_even(l: list):
    return [
        x
        for x in (
            list(
                OrderedDict(
                    (i // 2, x) if x % 2 == 0 else (i, x) for i, x in enumerate(l)
                ).values()
            )
        )
        if x % 2 == 0
    ] + sorted([x for x in l if x % 2 != 0])