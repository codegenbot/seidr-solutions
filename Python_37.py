def sort_even(l: list):
    even_indices = [i for i, _ in enumerate(l) if i % 2 == 0]
    return [
        x if i % 2 != 0 else sorted([l[j] for j in even_indices])[k]
        for k, (i, x) in enumerate(sorted((i, x) for i, x in zip(even_indices, l)))
        if i % 2 == 0
    ]