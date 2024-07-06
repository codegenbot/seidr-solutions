```
def sort_third(l: list):
    return tuple(sorted((x, i % 3) for i, x in enumerate(l)))