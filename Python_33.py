```
def sort_third(lst):
    if not all(isinstance(i, list) for i in lst):
        return sorted([i[2] for i in lst if isinstance(i, list) and len(i) > 2])
    else:
        return sorted([x[2] for x in lst if isinstance(x, list) and len(x) > 2])