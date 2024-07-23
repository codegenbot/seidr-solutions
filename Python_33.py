def sort_third(l: list):
    third_indices = {val: i for i, val in enumerate(l) if (i + 1) % 3 == 0}
    original_indices = {val: i for i, val in enumerate(l)}
    return [
        (
            val
            if i not in third_indices
            else min([x for x in l if original_indices[x] in third_indices])
        )
        for i, val in enumerate(l)
    ]