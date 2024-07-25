```
def sort_third(lst):
    result = []
    while len(lst) > 0:
        result.append(tuple(sorted(lst)))
        lst.clear()
    return tuple(result)