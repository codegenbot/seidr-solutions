```
def sort_third(l: list):
    return [
        max(val for i, val in enumerate(l) if (i + 1) % 3 == 0)
        if i % 3 != 0 else val
        for i, val in enumerate(sorted(l))
    ]