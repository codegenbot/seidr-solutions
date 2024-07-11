```Python
def sort_third(l: list):
    third = [x for i, x in enumerate(l) if (i+1) % 3 == 0]
    rest = sorted([x for i, x in enumerate(l) if (i+1) % 3 != 0])
    return [x for x in sorted(third + rest)]