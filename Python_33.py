```
def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted(
                [y for idx, y in enumerate((x for x in l), start=1) if (idx - 1) % 3 == 1 or (idx - 1) % 3 == 2]
            )
        )
        for i, x in enumerate(l)
    ]