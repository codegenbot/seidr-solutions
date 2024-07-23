def sort_third(l: list):
    original_indices = {val: i for i, val in enumerate(l)}
    return [
        val if i % 3 != 0 else min([x for x in l if original_indices[x] % 3 != 0 and original_indices[x] > original_indices[val]])
        for i, val in enumerate(l)
    ]