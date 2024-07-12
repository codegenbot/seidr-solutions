```
def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else [y for y in sorted([x for x in l if (i - l.index(x)) % 3 == 2], reverse=True)][0]
        )
        for i, x in enumerate(l)
    ]