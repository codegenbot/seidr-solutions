```
def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted((y, j) for j, y in enumerate(l) if y != x and (j - l.index(x)) % 3 != 0)[::-1][0][1]
        )
        for i, x in enumerate(l)
    ]