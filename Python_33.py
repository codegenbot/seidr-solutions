```
def sort_third(l: list):
    return sorted((x, i) for i, x in enumerate(l))[::2]