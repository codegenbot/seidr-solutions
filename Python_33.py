```
def sort_third(l: list):
    return [sorted(x)[2] if len(x) > 2 else None for x in l]