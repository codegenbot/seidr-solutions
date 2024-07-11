```
def sort_third(l: list):
    return [x for i, x in enumerate(sorted(l)[::3])]