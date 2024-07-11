```
def sort_third(l: list):
    return [x for i, x in enumerate(l) if (i + 1) % 3 == 0]