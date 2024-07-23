def sort_third(l: list):
    original_indices = {val: i for i, val in enumerate(l)}
    return [
        (
            sorted([x for x in l if (i := original_indices[x]) % 3 == 0])[0]
            if i % 3 != 0
            else val
        )
        for i, val in enumerate(l)
    ]