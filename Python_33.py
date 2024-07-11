```
def sort_third(l: list):
    return sorted([x if i % 3 != 0 else min(l) for i, x in enumerate(l)])