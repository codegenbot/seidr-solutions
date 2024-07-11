```
def sort_third(l: list):
    return [x if i % 3 != 0 else min(l) for i, x in enumerate(sorted([y for pair in l for y in pair]))[::3]]