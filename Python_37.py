```
def sort_even(l: list):
    return [
        x if i % 2 != 0 else sorted([y for i, y in enumerate(l) if i % 2 == 0])[0]
        for i, x in enumerate(l)
    ]