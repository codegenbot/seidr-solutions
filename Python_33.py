def sort_third(l: list):
    original_indices = {val: i for i, val in enumerate(l)}
    return [
        val if i % 3 != 0 else min([x for x in l if original_indices[x] % 3 != 0])
        for i, val in enumerate(l)
    ]