```
def sort_third(l: list):
    return sorted([val for i, val in enumerate(l) if (i+1) % 3 == 0])