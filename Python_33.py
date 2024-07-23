```
def sort_third(l: list):
    return sorted([val if i % 3 != 0 else min(l) for i, val in enumerate(l)])