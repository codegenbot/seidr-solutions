```
def sort_third(l: list):
    return (
        (x if i >= len(l) - 1 or i % 3 == 0 else sorted([x for x in l[i : i + 3] if i % 3 != 0])[i % 3])
        for i, x in enumerate(l)
    )