```
def sort_third(l: list):
    l_copy = l.copy()
    return [
        i if i % 3 != 0 else i
        for i in sorted([i for i in l if i % 3 == 0], reverse=True)
        + [i for i in l if i % 3 != 0]
    ]