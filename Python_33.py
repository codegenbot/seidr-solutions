```
def sort_third(lst: list) -> tuple:
    return tuple(sorted((x[0], x) for x in map(str, lst)))