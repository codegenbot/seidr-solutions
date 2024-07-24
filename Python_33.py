```
def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else min([y for y in l if (i - j) % 3 != 0], default=x)
        )
        for i, j in enumerate(l)
    ]