```
def sort_even(l: list):
    return [
        (
            x
            if i % 2 != 0
            else min([y for y in l if (i - 1) // 2 == (l.index(y)) // 2]) or next(iter(l))
            if [y for y in l if (i - 1) // 2 == (l.index(y)) // 2]
            else x
        )
        for i, x in enumerate(l)
    ]