```
def sort_third(l: list):
    original_indices = {val: i for i, val in enumerate(l)}
    return [
        sorted([x for x in l if original_indices[x] % 3 == 0 and x != y])[0]
        if i % 3 != 0 else y
        for i, (y, _) in enumerate(l)
    ]