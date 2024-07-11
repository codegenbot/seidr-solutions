```Python
def sort_third(l: list):
    return [sorted(list(filter(None, i)))[0] if (i := index) % 3 == 0 else i for i, index in enumerate(l)]