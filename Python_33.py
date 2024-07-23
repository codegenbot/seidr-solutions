def sort_third(l: list):
    original_indices = {val: i for i, val in enumerate(l)}
    return [
        next((x for x in l if original_indices[x] % 3 != 0), None) if i % 3 != 0 else min(l)
        for i, _ in enumerate(l)
    ]