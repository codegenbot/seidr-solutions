```
def sort_even(l: list):
    return [
        i if j % 2 != 0 else sorted([x for x in l if (j - i) % 2 == 0])[::-1][0] if [x for x in l if (j - i) % 2 == 0] else 0
        for i, j in enumerate(l)
    ]