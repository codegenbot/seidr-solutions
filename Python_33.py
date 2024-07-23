def sort_third(l: list):
    original_indices = {val: i for i, val in enumerate(l)}
    return [
        val if i % 3 != 0 else sorted([x for x in l if original_indices[x] % 3 != i % 3])[0]
        for i, val in enumerate(l)
    ]